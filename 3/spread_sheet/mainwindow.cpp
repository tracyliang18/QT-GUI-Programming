#include <QtGui>

#include "mainwindow.h"
#include "spreadsheet.h"


MainWindow:: MainWindow(QWidget *parent)
{
    spreadsheet = new Spreadsheet;
    setCentralWidget(spreadsheet);

    createActions();
    createMenus();
    createContextMenu();
    createToolBars();
    createStatusBars();

    readSettings();

    findDialog =0;

    setWindowIcon(QIcon(":/images/icon.png"));
    setCurrentFile("");

}

void MainWindow::createActions()
{
    //new action
    newAction = new QAction(tr("&New"), this);
    newAction->setIcon(QIcon(":/images/new.png"));
    newAction->setShortcut(QKeySequence::New);
    newAction->setStatusTip(tr("Create a new spreadsheet file"));
    connect(newAction, SIGNAL(triggered()),this,SLOT(newFile());

     //open action
     //save action
     //save as action

    //recent file action
     for(int i = 0; i < MaxRecentFiles; ++i)
    {
        recentFileActions[i] = new QAction(this);
        recentFileActions[i]->setVisible(false);
        connect(recentFileActions[i], SIGNAL(triggered()),this,SLOT(openRecentFile()));
    }

    //exit
    exitAction = new QAction(tr("&Exit"),this);
    exitAction->setShortcut(tr("Ctrl+Q"));
    exitAction->setStatusTip(tr("Exit the application"));
    connect(exitAction, SIGNAL(triggered()),this,SLOT(close()));

    //select action
    selectAllAction = new QAction(tr("&All"),this);
    selectAllAction->setShorcut(QKeySequence::SelectAll);
    selectAllAction->setStatusTip(tr("select all the cells n the spreadsheet"));
    connect(selectAllAction, SLOT(triggered()),spreadsheet,SLOT(selectAll()));

    //options
    //show grid
    showGridAction = new QAction(tr("&Show Grid"),this);
    showGridAction->setCheckable(true);
    showGridAction->setChecked(spreadsheet->showGrid());
    showGridAction->setStatusTip(tr("Show or hide the spreadsheet's""grid"));
    connect(shoGridAction, SIGNAL(toggled(bool)),spreadsheet,SLOT(setShowGrid(bool)));

     //auto recalculate

     //about
     aboutQtAction = new QAction(tr("About &Qt"),this);
    aboutQtAction->setStatusTip(tr("Show the Qt library's About box"));
    connect(aboutQtAction, SIGNAL(triggered()),qApp,SLOT(aboutQt()));

}

void MainWindow::createMenus()
{
    /*file menu*/
    fileMenu = menuBar()->addMenu(tr("&File"));
    fileMenu->addAction(newAction);
    fileMenu->addAction(openAction);
    fileMenu->addAction(saveAction);
    fileMenu->addAction(saveAsAction);
    separatorAction = fileMenu->addSeparator();
    for(int i=0; i<MaxRecentFiles;++i)
        fileMenu->addAction(recentFileActions[i]);
    fileMenu->addSepartor();
    fileMenu->addAction(exitAction);

    /*edit menu*/
    editMenu = menuBar()->addMenu(tr("&Edit"));
    editMenu->addAction(cutAction);
    editMenu->addAction(copyAction);
    editMenu->addAction(pasteAction);
    editMenu->addAction(deleteAction);
        /*edit select sub menu*/
    QMenu *selectSubMenu = editMenu->addMenu(tr("&Select"));
    selectSubMenu->addAction(selectAllAction);
    selectSubMenu->addAction(selectRowAction);
    selectSubMenu->addAction(selectColumnAction);

    editMenu->addSeparator();
    editMenu->addAction(findAction);
    editMenu->addAction(goToCellAction);

    /*tools menu*/
    toolsMenu=menuBar()->addMenu(tr("&Tools");
    toolsMenu->addAction(recalculateAction);
    toolsMenu->addAction(sortAction);

    /*option menu*/
    optionsMenu = menuBar()->addMenu(tr("&Options"));
    optionsMenu->addAction(showGridAction);
    optionsMenu->addAction(autoRecalculateAction);

    menuBar().addSeparator();
    /*help menu*/
    helpMenu=menuBar()->addMenu(tr("&Help"));
    helpMenu->addAction(aboutAction);
    helpMenu->addAction(aboutQtAction);
}


void MainWindow::createContextMenu()
{
    spreadsheet->addAction(cutAction);
    spreadsheet->addAction(copyAction);
    spreadsheet->addAction(pasteAction);
    spreadsheet->setContextMenuPolicy(Qt::ActionsContextMenu);
}

void MainWindow::createToolBars()
{
    fileToolBar = addToolBar(tr("&File"));
    fileToolBar.addAction(newAction);
    fileToolBar.addAction(openAction);
   fileToolBar.addAction(saveAction);
}

void MainWindow::createStatusBars()
{
    locationLabel = new Qlabel(" w999 ");
    locationLabel->setAlignment(Qt::AlignCenter);
    locationLabel->setMinimumSize(locationLabel->sizeHint());

    formulaLabel = new Qlabel;
    formulaLabel->setIndent(3);

    statusBar()->addWidget(locationLabel);
    statusBar()->addWidget(formulaLabel);

    connect(spreadsheet,SIGNAL(currentCellChanged(int,int,int,int)),this,SLOT(updateStatusBar());
    connect(spreadsheet,SIGNAL(modified()),this,SLOT(spreadSheetModified());

     updateStatusBar();

}

void MainWindow::updateStatusBar()
{
    locationLabel->setText(spreadsheet->currentLocation());
    formulaLabel->setText(spreadsheet->currentFormula());
}

void MainWindow::spreadSheetModified()
{
    setWindowModality(true);
    updateStatusBar();
}

//File menu action slot function

void MainWindow::newFile()
{
    if (okToContinue())
    {
            spreadsheet->clear();
            setCurrentFile("");
    }
}

bool MainWindow::okToContinue()
{
    if (isWindowModified())
    {
        int r = QMessageBox::warning(this,
                                                                    tr("Spreadsheet"),
                                                                    tr("The document has been modified.\n""Do you want to save your changes?"),
                                                                    QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
        if (r == QMessageBox::Yes)
            return save();
        else if (r == QMessageBox::Cancel)
            return false;
    }

    return true;
}

void MainWindow::open()
{
    if (okToContinue())
    {
        QString fileName = QFileDialog::getOpenFileName(this, tr("Open Spreadsheet"),tr("Spreadsheet file (*.sp)"));

        if(!fileName.isEmpty())
            loadFile(fileName);
    }
}

bool MainWindow::loadFile(const QString &fileName)
{
    if (!spreadsheet->readFile(fileName))
    {
        statusBar()->showMessage(tr("Loading canceled"), 2000);
        return false;
    }

    setCurrentFile(fileName);
    statusBar()->showMessage(tr("File Loaded"),2000);

    return true;
}

bool MainWindow::save()
{
    if (curFile.isEmpty())
        return saveAs();
    else
        return saveFile(curFile);
}

bool MainWindow::saveAs()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save spreadsheet"),tr("spreadsheet files (*.sp)"));

    if(fileName.isEmpty())
        return false;
    return saveFile(fileName);
}

bool MainWindow::saveFile(const QString &fileName)
{
    if (!spreadsheet->writeFile(fileName))
    {
        statusBar()->showMessage(tr("Saving canceld"),2000);
        return false;
    }

    setCurrentFile(fileName);
    statusBar()->showMessage(tr("File saved"),2000);

    return true;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
    if (okToContinue())
    {
        writeSettings();
        event->accept();
    }
    else
    {
        event->ignore();
    }

    return;
}

void MainWIndow::setCurrentFile(const QString &fileName)
{
    curFile=fileName;
    setWindowModified(false);
    QString shownName = tr("Untitled");
    if (!curFile.isEmpty())
    {
        shownName = strippedName(curFile);
        recentFiles.removeAll(curFile);
        recentFile.prepend(curFile);
        updateRecentFileActions();
    }

    setWindowTitle(tr("%1[*] - %2").arg(shownName).arg(tr("Spreadsheet")));
}

QString MainWindow::strippedName(const QString &fullFileName)
{
    return QFileInfo(fullFileName).fileName();
}

void MainWindow::updateRecentFileActions()
{
    QMutableStringListIterator i(recentFiles);

    while(i.hasNext())
    {
        if(!QFile::exists(i.next()))
            i.remove();
    }

    for(int j=0; j < MaxRecentFiles;++j)
    {
        if(j < recentFiles.count())
        {
            QString text = tr("&%1 %2").arg(j+1).arg(strippedName(recentFiles[j]));
            recentFileActions[j]->setText(text);
            recentFileActions[j]->setData(recentFiles[j]);
            recentFileActions[j]->setVisible(false);
        }
        else
        {
            recentFileActions[j]->setVisible(false);
        }
    }

    separatorAction->setVisiable(!recentFiles.isEmpty());
}

void MainWindow::openRecentFile()
{
    if (okToContinue())
    {
        QAction *actionSource = qobject_cast<QAction *>(sender());
        if(actionSource)
            loadFile(action->data().toString());
    }
}

void MainWindow::find()
{
    if( !findDialog)
    {
        findDialog = new FindDialog(this);
        connect(findDialog, SIGNAL(findNext(const QString &, Qt::CaseSensitivity)),
                         spreadsheet,SLOT(findNext(const QString &,Qt::CaseSensitivity)));
        connect(findDialog, SIGNAL(findPrevious(const QString &, Qt::CaseSensitivity)),
                         spreadsheet,SLOT(findPrevious(const QString &,Qt::CaseSensitivity)));
    }

    findDialog->show();
    findDialog->raise();
    findDialog->activateWindow();
}

void MainWindow::goToCell()
{
    GoToCellDialog dialog(this);
    if (dialog.exec())
    {
        QString str = dialog.lineEdit->text().toUpper();
        spreadsheet->setCurrentCell(str.mid(1).toInt() - 1, str[0].unicode() - 'A');
    }
}

/*bad*/
void MainWindow::sort()
{
    SortDialog dialog(this);
    QTableWidgetSelectionRange range = spreadsheet->selectedRange();
    dialog.setColumnRange('A'+range.leftColumn(), 'A'+range.rightColumn());

    if (dialog.exec())
    {
        SpreadsheetCompare compare;
        compare.keys[0] = dialog.firstColumnCombo->currentIndex();
        compare.keys[1] = dialog.secondColumnCombo->currentIndex() - 1;
        compare.keys[2] = dialog.thirdColumnCombo->currentIndex() - 1;
        compare.ascending[0] = (dialog.firstOrderCombo->currentIndex() == 0);
        compare.ascending[1] = (dialog.secondOrderCombo->currentIndex() == 0);
        compare.ascending[2] = (dialog.thirdOrderCombo->currentIndex() == 0);
        spreadsheet.sort(compare);
    }
}

void MainWindow::about()
{
    QMessageBox::about(this, tr("About Spreadsheet"),
                                               tr("<h2>Spreadsheet 1.1</h2>"
                                                    "<p>Copyright &copy; 2008 Software Inc."));
}

void MainWindow::writeSettings()
{
    QSettings settings("Software Inc.", "Spreadsheet");

    settings.setValue("geometry", saveGeometry());
    settings.setValue("recentFiles", recentFile);
    settings.setValue("ShowGrid",showGridAction->isChecked());
    settings.setValue("autoRecalc",autoRecalculateAction->isChecked());


}


