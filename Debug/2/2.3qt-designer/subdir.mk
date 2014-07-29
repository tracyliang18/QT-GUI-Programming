################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../2/2.3qt-designer/gotocelldialog.o \
../2/2.3qt-designer/main.o \
../2/2.3qt-designer/moc_gotocelldialog.o 

CPP_SRCS += \
../2/2.3qt-designer/gotocelldialog.cpp \
../2/2.3qt-designer/main.cpp \
../2/2.3qt-designer/moc_gotocelldialog.cpp 

OBJS += \
./2/2.3qt-designer/gotocelldialog.o \
./2/2.3qt-designer/main.o \
./2/2.3qt-designer/moc_gotocelldialog.o 

CPP_DEPS += \
./2/2.3qt-designer/gotocelldialog.d \
./2/2.3qt-designer/main.d \
./2/2.3qt-designer/moc_gotocelldialog.d 


# Each subdirectory must supply rules for building sources it contributes
2/2.3qt-designer/%.o: ../2/2.3qt-designer/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/qt4 -I/usr/include/qt4/Qt -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


