################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../app.o \
../main.o \
../userinterface.o 

CPP_SRCS += \
../app.cpp \
../main.cpp \
../userinterface.cpp 

OBJS += \
./app.o \
./main.o \
./userinterface.o 

CPP_DEPS += \
./app.d \
./main.d \
./userinterface.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


