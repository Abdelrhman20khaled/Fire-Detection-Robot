#define Right_RMotor_In1        12
#define Right_RMotor_In2        11
#define Right_RMotor_Enable     10
#define Right_LMotor_In1        9
#define Right_LMotor_In2        8
#define Right_LMotor_Enable     7
#define MQ_PIN                  6

void Motor_Stop(void)
{
      digitalWrite(Right_RMotor_In1,LOW);  
      digitalWrite(Right_RMotor_In2,LOW); 
     
      digitalWrite(Right_LMotor_In1,LOW);  
      digitalWrite(Right_LMotor_In2,LOW); 
}

void Motor_stepForward(void)
{
      digitalWrite(Right_RMotor_In1,HIGH);  
      digitalWrite(Right_RMotor_In2,LOW); 
     
      digitalWrite(Right_LMotor_In1,HIGH);  
      digitalWrite(Right_LMotor_In2,LOW); 
}

void Motor_stepReverse(void)
{
      digitalWrite(Right_RMotor_In1,LOW);  
      digitalWrite(Right_RMotor_In2,HIGH); 
     
      digitalWrite(Right_LMotor_In1,LOW);  
      digitalWrite(Right_LMotor_In2,HIGH);
}
void setup() {
  
    Serial.begin(9600); // Initialize serial communication
    
    /*Define the pin of the MQ-2 Sensor as input pin*/
     pinMode(Right_RMotor_In1,      OUTPUT);
     pinMode(Right_RMotor_In2,      OUTPUT);
     pinMode(Right_RMotor_Enable,   OUTPUT);
     
     pinMode(Right_LMotor_In1,      OUTPUT);
     pinMode(Right_LMotor_In2,      OUTPUT);
     pinMode(Right_LMotor_Enable,   OUTPUT);
     
     pinMode(MQ_PIN,                INPUT);

     digitalWrite(Right_RMotor_Enable,HIGH);
     digitalWrite(Right_LMotor_Enable,HIGH);
}

void loop() {

     if(digitalRead(MQ_PIN))
     {
      
      Motor_stepForward();

      delay(1000);

      // the robot reached to the fire location
      Motor_Stop();

      // check again if a fire still occuring
      if(digitalRead(MQ_PIN))
       {
          while(digitalRead(MQ_PIN)== HIGH )
          {
            Serial.write('F');//Fire If the robot detect a fire
            Motor_Stop();
          }
       }
       
     if(digitalRead(MQ_PIN) == LOW)
      {
         delay(500);
         Serial.write('S');//Fire is Fake

          /* The robot return to it is initial place */
          Motor_stepReverse();
          delay(1000);
          Motor_Stop();
      }
      
     }
     else
     {
       Motor_Stop();
       
      Serial.write('S');
      
     }
          
} 
