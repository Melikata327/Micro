```cpp
int led = 12;
int led = 13;
void setup () {
 pinMode(led.OUTPUT);
}
void loop(){
digitalWrite(led,HIGH);
dealay(1000);
digitalWrite(led,LOW);
dealay(1000);
}
```
