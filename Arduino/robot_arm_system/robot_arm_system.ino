//#define dirPin1 5
//#define stepPin1 17
//#define dirPin2 16
//#define stepPin2 4
//#define dirPin3 2
//#define stepPin3 15
#define stepsPerRevolution 200

#define X_STEP_PIN                            54
#define X_DIR_PIN                             55
#define X_ENABLE_PIN                        38

#define Y_STEP_PIN                            60
#define Y_DIR_PIN                             61
#define Y_ENABLE_PIN                          56

#define Z_STEP_PIN                          46
#define Z_DIR_PIN                           48
#define Z_ENABLE_PIN                        62

String Val;
String Val_array[500];
int counter = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(X_STEP_PIN, OUTPUT);
  pinMode(X_DIR_PIN, OUTPUT);
  pinMode(X_ENABLE_PIN, OUTPUT);

  pinMode(Y_STEP_PIN, OUTPUT);
  pinMode(Y_DIR_PIN, OUTPUT);
  pinMode(Y_ENABLE_PIN, OUTPUT);

  pinMode(Z_STEP_PIN, OUTPUT);
  pinMode(Z_DIR_PIN, OUTPUT);
  pinMode(Z_ENABLE_PIN, OUTPUT);

  digitalWrite(X_ENABLE_PIN, 0);
  digitalWrite(Y_ENABLE_PIN, 0);
  digitalWrite(Z_ENABLE_PIN, 0);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()) {
    Val = Serial.readString();
  }
  //  if (Val == "ON") {
  //    Val_array[counter] = "ON";
  //    counter++;
  //    digitalWrite(2, 1);
  //  } else if (Val == "OFF") {
  //    Val_array[counter] = "OFF";
  //    counter++;
  //    digitalWrite(2, 0);
  //  }else
  if (Val == "XStep10") {
    Val_array[counter] = "XStep10";
    counter++;
    digitalWrite(X_DIR_PIN, HIGH);

    // Spin motor slowly
    for (int x = 0; x < 10; x++)
    {
      digitalWrite(X_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(X_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
    // Set motor direction counterclockwise
    //    digitalWrite(dirPin, LOW);
  }
  else if (Val == "XStep100") {
    Val_array[counter] = "XStep100";
    counter++;
   digitalWrite(X_DIR_PIN, HIGH);

    // Spin motor slowly
    for (int x = 0; x < 100; x++)
    {
      digitalWrite(X_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(X_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
    // Set motor direction counterclockwise
    //    digitalWrite(dirPin, LOW);
  } else if (Val == "XStep1000") {
    Val_array[counter] = "XStep1000";
    counter++;
    digitalWrite(X_DIR_PIN, HIGH);

    // Spin motor slowly
    for (int x = 0; x < 1000x; x++)
    {
      digitalWrite(X_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(X_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
    // Set motor direction counterclockwise
    //    digitalWrite(dirPin, LOW);
  }
//  else if (Val == "XStep1000REV") {
//    Val_array[counter] = "XStep1000REV";
//    counter++;
//    digitalWrite(dirPin1, LOW);
//
//    // Spin motor slowly
//    for (int x = 0; x < 1000; x++)
//    {
//      digitalWrite(stepPin1, HIGH);
//      delayMicroseconds(2000);
//      digitalWrite(stepPin1, LOW);
//      delayMicroseconds(2000);
//    }
//    // Set motor direction counterclockwise
//    //    digitalWrite(dirPin, LOW);
//  }
//  else if (Val == "YStep10") {
//    Val_array[counter] = "YStep10";
//    counter++;
//    digitalWrite(dirPin2, HIGH);
//
//    // Spin motor slowly
//    for (int x = 0; x < 10; x++)
//    {
//      digitalWrite(stepPin2, HIGH);
//      delayMicroseconds(2000);
//      digitalWrite(stepPin2, LOW);
//      delayMicroseconds(2000);
//    }
//    // Set motor direction counterclockwise
//    //    digitalWrite(dirPin, LOW);
//  }
//  else if (Val == "YStep100") {
//    Val_array[counter] = "YStep100";
//    counter++;
//    digitalWrite(dirPin2, HIGH);
//
//    // Spin motor slowly
//    for (int x = 0; x < 100; x++)
//    {
//      digitalWrite(stepPin2, HIGH);
//      delayMicroseconds(2000);
//      digitalWrite(stepPin2, LOW);
//      delayMicroseconds(2000);
//    }
//    // Set motor direction counterclockwise
//    //    digitalWrite(dirPin, LOW);
//  } else if (Val == "YStep1000") {
//    Val_array[counter] = "YStep1000";
//    counter++;
//    digitalWrite(dirPin2, HIGH);
//
//    // Spin motor slowly
//    for (int x = 0; x < 1000; x++)
//    {
//      digitalWrite(stepPin2, HIGH);
//      delayMicroseconds(2000);
//      digitalWrite(stepPin2, LOW);
//      delayMicroseconds(2000);
//    }
//    // Set motor direction counterclockwise
//    //    digitalWrite(dirPin, LOW);
//  }
//
//  else if (Val == "ZStep10") {
//    Val_array[counter] = "ZStep10";
//    counter++;
//    digitalWrite(dirPin3, HIGH);
//
//    // Spin motor slowly
//    for (int x = 0; x < 10; x++)
//    {
//      digitalWrite(stepPin3, HIGH);
//      delayMicroseconds(2000);
//      digitalWrite(stepPin3, LOW);
//      delayMicroseconds(2000);
//    }
//    // Set motor direction counterclockwise
//    //    digitalWrite(dirPin, LOW);
//  }
//  else if (Val == "ZStep100") {
//    Val_array[counter] = "ZStep100";
//    counter++;
//    digitalWrite(dirPin3, HIGH);
//
//    // Spin motor slowly
//    for (int x = 0; x < 100; x++)
//    {
//      digitalWrite(stepPin3, HIGH);
//      delayMicroseconds(2000);
//      digitalWrite(stepPin3, LOW);
//      delayMicroseconds(2000);
//    }
//    // Set motor direction counterclockwise
//    //    digitalWrite(dirPin, LOW);
//  } else if (Val == "ZStep1000") {
//    Val_array[counter] = "ZStep1000";
//    counter++;
//    digitalWrite(dirPin3, HIGH);
//
//    // Spin motor slowly
//    for (int x = 0; x < 1000; x++)
//    {
//      digitalWrite(stepPin3, HIGH);
//      delayMicroseconds(2000);
//      digitalWrite(stepPin3, LOW);
//      delayMicroseconds(2000);
//    }
//    // Set motor direction counterclockwise
//    //    digitalWrite(dirPin, LOW);
//  }
//  else if (Val == "StepDouble") {
//    Val_array[counter] = "StepDouble";
//    counter++;
//    digitalWrite(dirPin3, LOW);
//    digitalWrite(dirPin2, HIGH);
//
//    // Spin motor slowly
//    for (int x = 0; x < 100; x++)
//    {
//      digitalWrite(stepPin3, HIGH);
//      digitalWrite(stepPin2, HIGH);
//      delayMicroseconds(2000);
//      digitalWrite(stepPin3, LOW);
//      digitalWrite(stepPin2, LOW);
//      delayMicroseconds(2000);
//    }
//    // Set motor direction counterclockwise
//    //    digitalWrite(dirPin, LOW);
//  }
//  else if (Val == "StepDoubleREV") {
//    Val_array[counter] = "StepDoubleREV";
//    counter++;
//    digitalWrite(dirPin3, HIGH);
//    digitalWrite(dirPin2, LOW);
//
//    // Spin motor slowly
//    for (int x = 0; x < 100; x++)
//    {
//      digitalWrite(stepPin3, HIGH);
//      digitalWrite(stepPin2, HIGH);
//      delayMicroseconds(2000);
//      digitalWrite(stepPin3, LOW);
//      digitalWrite(stepPin2, LOW);
//      delayMicroseconds(2000);
//    }
//    // Set motor direction counterclockwise
//    //    digitalWrite(dirPin, LOW);
//  }
  Val = "";
}
