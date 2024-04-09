const int ledPin = 13; const int ldrPin = A0; void setup()  
{ 
Serial.begin(9600); pinMode(ledPin, OUTPUT); 
pinMode(ldrPin, INPUT); 
} 
void loop()  
{ 
int ldrStatus = analogRead(ldrPin); if (ldrStatus >= 900)  
{ 
digitalWrite(ledPin, HIGH); 
Serial.print("Its DARK, LED TURNED ON: "); 
Serial.println(ldrStatus); 
}  else  { 
digitalWrite(ledPin, LOW); 
Serial.print("Its BRIGHT, LED TURNED OFF : "); 
Serial.println(ldrStatus); 
} 
} 
