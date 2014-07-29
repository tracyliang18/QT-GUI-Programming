#include <QtGui>

#include "mainwindow.h"


MainWindow:: MainWindow()
{
    spreadsheet = new spreadsheet;
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
    connect(shoGridAction, SIGNAL(toggled(bool),spreadsheet,SLOT(setShowGrid(bool)));

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
