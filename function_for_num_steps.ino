#include <Stepper.h>

// Define constants for motor steps per revolution
const int stepsPerRevolution = 200;

// Enum to represent the two motors
enum Motor {
  MOTOR_1,
  MOTOR_2
};

// Define pin configurations for each motor
const int motor1Pins[] = {8, 9, 10, 11};
const int motor2Pins[] = {4, 5, 6, 7};

// Initialize the stepper motor objects
Stepper motor1(stepsPerRevolution, motor1Pins[0], motor1Pins[1], motor1Pins[2], motor1Pins[3]);
Stepper motor2(stepsPerRevolution, motor2Pins[0], motor2Pins[1], motor2Pins[2], motor2Pins[3]);

// Function to move the specified stepper motor a specified number of steps in a direction
void moveStepper(int numSteps, bool clockwise, Motor motor) {
  Stepper* selectedMotor;

  // Select the motor based on the argument
  switch(motor) {
    case MOTOR_1:
      selectedMotor = &motor1;
      break;
    case MOTOR_2:
      selectedMotor = &motor2;
      break;
    default:
      // Invalid motor, do nothing
      return;
  }

  // Move the selected motor in the specified direction
  if (clockwise) {
    selectedMotor->step(numSteps);
  } else {
    selectedMotor->step(-numSteps);
  }
}

void setup() {
  // Set the motor speeds (rpm)
  motor1.setSpeed(100);
  motor2.setSpeed(100);
}

void loop() {
  //move motor 1 100 steps clockwise
  moveStepper(2, true, MOTOR_1);
  
  // Delay for some time
  delay(1000);
  
  // move motor 2 100 steps counterclockwise
  moveStepper(100, false, MOTOR_2);
  
  // Delay for some time
  delay(1000);
}


