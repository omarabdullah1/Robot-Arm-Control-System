#include <Arduino.h>
#include <Servo.h>

#define stepsPerRevolution 200

#define X_STEP_PIN 54
#define X_DIR_PIN 55
#define X_ENABLE_PIN 38

#define Y_STEP_PIN 25
#define Y_DIR_PIN 23
#define Y_ENABLE_PIN 56

#define Z_STEP_PIN 46
#define Z_DIR_PIN 48
#define Z_ENABLE_PIN 62

#define E0_STEP_PIN 26
#define E0_DIR_PIN 28
#define E0_ENABLE_PIN 24

#define E1_STEP_PIN 36
#define E1_DIR_PIN 34
#define E1_ENABLE_PIN 30

#define BASE1_STEP_PIN 32
#define BASE1_DIR_PIN 47

#define BASE2_STEP_PIN 45
#define BASE2_DIR_PIN 43

String Val;
String Val_array[500];
int counter = 0;

Servo myservo;
int pos = 0;

void setup()
{
  pinMode(X_STEP_PIN, OUTPUT);
  pinMode(X_DIR_PIN, OUTPUT);
  pinMode(X_ENABLE_PIN, OUTPUT);

  pinMode(Y_STEP_PIN, OUTPUT);
  pinMode(Y_DIR_PIN, OUTPUT);
  pinMode(Y_ENABLE_PIN, OUTPUT);

  pinMode(Z_STEP_PIN, OUTPUT);
  pinMode(Z_DIR_PIN, OUTPUT);
  pinMode(Z_ENABLE_PIN, OUTPUT);

  pinMode(E0_STEP_PIN, OUTPUT);
  pinMode(E0_DIR_PIN, OUTPUT);
  pinMode(E0_ENABLE_PIN, OUTPUT);

  pinMode(E1_STEP_PIN, OUTPUT);
  pinMode(E1_DIR_PIN, OUTPUT);
  pinMode(E1_ENABLE_PIN, OUTPUT);

  pinMode(BASE1_STEP_PIN, OUTPUT);
  pinMode(BASE1_DIR_PIN, OUTPUT);
  pinMode(BASE2_STEP_PIN, OUTPUT);
  pinMode(BASE2_DIR_PIN, OUTPUT);

  digitalWrite(X_ENABLE_PIN, 0);
  digitalWrite(Y_ENABLE_PIN, 0);
  digitalWrite(Z_ENABLE_PIN, 0);

  digitalWrite(E0_ENABLE_PIN, 0);
  digitalWrite(E1_ENABLE_PIN, 0);

  myservo.attach(4); 
  myservo.write(0);
  Serial.begin(115200);
}

void loop()
{
  if (Serial.available())
  {
    Val = Serial.readString();
  }
  if (Val == "XStep10")
  {
    Val_array[counter] = "XStep10";
    counter++;
    digitalWrite(X_DIR_PIN, HIGH);

    for (int x = 0; x < 1; x++)
    {
      digitalWrite(X_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(X_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "XStep100")
  {
    Val_array[counter] = "XStep100";
    counter++;
    digitalWrite(X_DIR_PIN, HIGH);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(X_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(X_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "XStep1000")
  {
    Val_array[counter] = "XStep1000";
    counter++;
    digitalWrite(X_DIR_PIN, HIGH);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(X_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(X_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }

  else if (Val == "YStep10")
  {
    Val_array[counter] = "YStep10";
    counter++;
    digitalWrite(Y_DIR_PIN, HIGH);

    for (int x = 0; x < 10; x++)
    {
      digitalWrite(Y_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Y_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "YStep100")
  {
    Val_array[counter] = "YStep100";
    counter++;
    digitalWrite(Y_DIR_PIN, HIGH);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(Y_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Y_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "YStep1000")
  {
    Val_array[counter] = "YStep1000";
    counter++;
    digitalWrite(Y_DIR_PIN, HIGH);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(Y_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Y_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "ZStep10")
  {
    Val_array[counter] = "ZStep10";
    counter++;
    digitalWrite(Z_DIR_PIN, HIGH);

    for (int x = 0; x < 10; x++)
    {
      digitalWrite(Z_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Z_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "ZStep100")
  {
    Val_array[counter] = "ZStep100";
    counter++;
    digitalWrite(Z_DIR_PIN, HIGH);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(Z_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Z_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "ZStep1000")
  {
    Val_array[counter] = "ZStep1000";
    counter++;
    digitalWrite(Z_DIR_PIN, HIGH);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(Z_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Z_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }

  else if (Val == "E0_Step10")
  {
    Val_array[counter] = "E0_Step10";
    counter++;
    digitalWrite(E0_DIR_PIN, HIGH);

    for (int x = 0; x < 10; x++)
    {
      digitalWrite(E0_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E0_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "E0_Step100")
  {
    Val_array[counter] = "E0_Step100";
    counter++;
    digitalWrite(E0_DIR_PIN, HIGH);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(E0_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E0_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "E0_Step1000")
  {
    Val_array[counter] = "E0_Step1000";
    counter++;
    digitalWrite(E0_DIR_PIN, HIGH);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(E0_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E0_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "E1_Step10")
  {
    Val_array[counter] = "E1_Step10";
    counter++;
    digitalWrite(E1_DIR_PIN, HIGH);

    for (int x = 0; x < 10; x++)
    {
      digitalWrite(E1_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E1_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "E1_Step100")
  {
    Val_array[counter] = "E1_Step100";
    counter++;
    digitalWrite(E1_DIR_PIN, HIGH);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(E1_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E1_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "E1_Step1000")
  {
    Val_array[counter] = "E1_Step1000";
    counter++;
    digitalWrite(E1_DIR_PIN, HIGH);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(E1_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E1_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }

  if (Val == "-XStep10")
  {
    Val_array[counter] = "-XStep10";
    counter++;
    digitalWrite(X_DIR_PIN, LOW);

    for (int x = 0; x < 10; x++)
    {
      digitalWrite(X_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(X_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-XStep100")
  {
    Val_array[counter] = "-XStep100";
    counter++;
    digitalWrite(X_DIR_PIN, LOW);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(X_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(X_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-XStep1000")
  {
    Val_array[counter] = "-XStep1000";
    counter++;
    digitalWrite(X_DIR_PIN, LOW);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(X_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(X_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }

  else if (Val == "-YStep10")
  {
    Val_array[counter] = "-YStep10";
    counter++;
    digitalWrite(Y_DIR_PIN, LOW);

    for (int x = 0; x < 10; x++)
    {
      digitalWrite(Y_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Y_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-YStep100")
  {
    Val_array[counter] = "-YStep100";
    counter++;
    digitalWrite(Y_DIR_PIN, LOW);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(Y_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Y_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-YStep1000")
  {
    Val_array[counter] = "-YStep1000";
    counter++;
    digitalWrite(Y_DIR_PIN, LOW);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(Y_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Y_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-ZStep10")
  {
    Val_array[counter] = "-ZStep10";
    counter++;
    digitalWrite(Z_DIR_PIN, LOW);

    for (int x = 0; x < 10; x++)
    {
      digitalWrite(Z_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Z_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-ZStep100")
  {
    Val_array[counter] = "-ZStep100";
    counter++;
    digitalWrite(Z_DIR_PIN, LOW);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(Z_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Z_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-ZStep1000")
  {
    Val_array[counter] = "-ZStep1000";
    counter++;
    digitalWrite(Z_DIR_PIN, LOW);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(Z_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(Z_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }

  else if (Val == "-E0_Step10")
  {
    Val_array[counter] = "-E0_Step10";
    counter++;
    digitalWrite(E0_DIR_PIN, LOW);

    for (int x = 0; x < 10; x++)
    {
      digitalWrite(E0_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E0_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-E0_Step100")
  {
    Val_array[counter] = "-E0_Step100";
    counter++;
    digitalWrite(E0_DIR_PIN, LOW);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(E0_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E0_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-E0_Step1000")
  {
    Val_array[counter] = "-E0_Step1000";
    counter++;
    digitalWrite(E0_DIR_PIN, LOW);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(E0_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E0_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-E1_Step10")
  {
    Val_array[counter] = "-E1_Step10";
    counter++;
    digitalWrite(E1_DIR_PIN, LOW);

    for (int x = 0; x < 10; x++)
    {
      digitalWrite(E1_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E1_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-E1_Step100")
  {
    Val_array[counter] = "-E1_Step100";
    counter++;
    digitalWrite(E1_DIR_PIN, LOW);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(E1_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E1_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "-E1_Step1000")
  {
    Val_array[counter] = "-E1_Step1000";
    counter++;
    digitalWrite(E1_DIR_PIN, LOW);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(E1_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(E1_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "StepDouble")
  {
    Val_array[counter] = "StepDouble";
    counter++;
    digitalWrite(BASE1_DIR_PIN, LOW);
    digitalWrite(BASE2_DIR_PIN, LOW);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(BASE1_STEP_PIN, HIGH);
      digitalWrite(BASE2_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(BASE1_STEP_PIN, LOW);
      digitalWrite(BASE2_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "StepDoubleREV")
  {
    Val_array[counter] = "StepDoubleREV";
    counter++;
    digitalWrite(BASE1_DIR_PIN, 1);
    digitalWrite(BASE2_DIR_PIN, 1);

    for (int x = 0; x < 100; x++)
    {
      digitalWrite(BASE1_STEP_PIN, HIGH);
      digitalWrite(BASE2_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(BASE1_STEP_PIN, LOW);
      digitalWrite(BASE2_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "SERVO +")
  {
    Val_array[counter] = "SERVO +";
    counter++;
    pos = pos + 15;
    myservo.write(pos); 
    delay(15);
  }
  else if (Val == "StepDouble1000")
  {
    Val_array[counter] = "StepDouble1000";
    counter++;
    digitalWrite(BASE1_DIR_PIN, LOW);
    digitalWrite(BASE2_DIR_PIN, LOW);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(BASE1_STEP_PIN, HIGH);
      digitalWrite(BASE2_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(BASE1_STEP_PIN, LOW);
      digitalWrite(BASE2_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "StepDoubleREV1000")
  {
    Val_array[counter] = "StepDoubleREV1000";
    counter++;
    digitalWrite(BASE1_DIR_PIN, 1);
    digitalWrite(BASE2_DIR_PIN, 1);

    for (int x = 0; x < 1000; x++)
    {
      digitalWrite(BASE1_STEP_PIN, HIGH);
      digitalWrite(BASE2_STEP_PIN, HIGH);
      delayMicroseconds(2000);
      digitalWrite(BASE1_STEP_PIN, LOW);
      digitalWrite(BASE2_STEP_PIN, LOW);
      delayMicroseconds(2000);
    }
  }
  else if (Val == "SERVO -")
  {
    Val_array[counter] = "SERVO -";
    counter++;
    pos = pos - 15;
    myservo.write(pos); 
    delay(15);
  }
  Val = "";
}