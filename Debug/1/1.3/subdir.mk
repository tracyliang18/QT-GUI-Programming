################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../1/1.3/layout.o 

CPP_SRCS += \
../1/1.3/layout.cpp 

OBJS += \
./1/1.3/layout.o 

CPP_DEPS += \
./1/1.3/layout.d 


# Each subdirectory must supply rules for building sources it contributes
1/1.3/%.o: ../1/1.3/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/qt4 -I/usr/include/qt4/Qt -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


