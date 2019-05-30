
int ledPin=13; //the pin of the LED
int val=100; //value of strobe speed

void setup()
{
    pinMode(ledPin,OUTPUT);//initialize digital pin LED_BUILTIN as an output.
}
void loop()
{  

    digitalWrite(ledPin,HIGH); //turn the LED on (HIGH is the voltage level)
    delay(val); //wait for a second
    
    digitalWrite(ledPin,LOW); //turn the LED off by making the voltage LOW
    delay(val); //wait for a second

} 
