int IN1 = 2;
int IN2 = 3;

int IN3 = 4;
int IN4 = 5;





void setup() {

Serial.begin(9600); // opens serial port, sets data rate to 9600 bps
pinMode(IN1, OUTPUT);
pinMode(IN2, OUTPUT);
pinMode(IN3, OUTPUT);
pinMode(IN4, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
digitalWrite(IN1, 0);
digitalWrite(IN2, 0);
digitalWrite(IN3, 0);
digitalWrite(IN4, 0);


}

void loop() {

if(Serial.available()) {

   int a= Serial.parseInt();// read the incoming data as string

   Serial.println(a);
   

    if (a == 1) //forward
    {

    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
    
   
    
   
    }
    if (a==0)//stop
    {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
     
    }
    if (a == 2) //right
 
    {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
     
    }
    if (a == 3) //left
 
    {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);

    
   }
    if (a == 4) //back
 
    {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, LOW);
    
    
      
   }  
         
}

}
