char data;//variable for initiate the incoming text 

void setup() {
Serial.begin(9600);

pinMode(5,OUTPUT);//for red pin
pinMode(6,OUTPUT);//for green pin
pinMode(7,OUTPUT);//for blue pin
pinMode(8,OUTPUT);
 }
 
void loop() {

 if(Serial.available()>0)// read the text 
   {   data= Serial.read();
       Serial.println(data);   
   digitalWrite(5,LOW);
   digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(8,LOW);

   
    if ( data == 'F') { 
      
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);    
         }
    if ( data == 'B')
   {     
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);    
         }
   if ( data == 'L')
   {       
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(7,HIGH);
    digitalWrite(8,LOW);    
         
         }
  if ( data == 'R')
   {       
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(8,HIGH);
    digitalWrite(7,LOW);    
         
         }
 
         

  
}
}
