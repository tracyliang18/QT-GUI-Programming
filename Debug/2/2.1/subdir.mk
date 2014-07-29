################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../2/2.1/finddialog.o \
../2/2.1/main.o \
../2/2.1/moc_finddialog.o 

CPP_SRCS += \
../2/2.1/finddialog.cpp \
../2/2.1/main.cpp \
../2/2.1/moc_finddialog.cpp 

OBJS += \
./2/2.1/finddialog.o \
./2/2.1/main.o \
./2/2.1/moc_finddialog.o 

CPP_DEPS += \
./2/2.1/finddialog.d \
./2/2.1/main.d \
./2/2.1/moc_finddialog.d 


# Each subdirectory must supply rules for building sources it contributes
2/2.1/%.o: ../2/2.1/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/qt4 -I/usr/include/qt4/Qt -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


