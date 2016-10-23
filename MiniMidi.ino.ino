// Taster
int taste = LOW;
int tasteAlt = LOW;


void setup() {
  Serial.begin(9600);
  pinMode(2,INPUT);

}

void loop() {

  //button(digitalpin, MIDI Note)
  button(2,48);
  button(3,49);
  button(4,50);
  button(5,51);
  button(6,52);
  button(7,53);
  button(8,54);

}


//Function that is called for a button 
void button(int pin,int note){
   //Taste 2
  taste = digitalRead(pin);
  int tasteAlt = LOW;

  if(taste == HIGH && tasteAlt == LOW){ 
  Serial.write(144);
  Serial.write(note);
  Serial.write(127);
  delay(500);
  }
  if(taste == LOW && tasteAlt == HIGH){
      Serial.write(144);
      Serial.write(note);
      Serial.write(0);
      delay(500);
  }
}
