int led1 = 12;
int led2 = 13;
void setup () {
 pinMode(led,OUTPUT);
}
void loop(){
digitalWrite(led1,HIGH);
delay(1000);
digitalWrite(led2,LOW);
delay(1000);
}
