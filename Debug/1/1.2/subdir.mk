################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../1/1.2/quit.o 

CPP_SRCS += \
../1/1.2/quit.cpp 

OBJS += \
./1/1.2/quit.o 

CPP_DEPS += \
./1/1.2/quit.d 


# Each subdirectory must supply rules for building sources it contributes
1/1.2/%.o: ../1/1.2/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/qt4 -I/usr/include/qt4/Qt -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


