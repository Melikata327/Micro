int led = 13;
 void setup ()
{
   PinMode(led,OUTPUT); 
   Serial.begin(9600);
}
   void loop() {
    if( Serial.available() > 0)
   
{
    char a  = Serial.read (led,HIGH );
    
      digitalWrite(led,HIGH ) ;
      
      }  elseif(a == 'L')
     
       {
       
          digitalWrite(led,LOW);

}
   }       
 