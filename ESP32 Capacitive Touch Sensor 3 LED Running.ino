// set pin numbers
const int touchPin = 4; 
const int touchPin2 = 4;
const int touchPin3 = 4;
const int ledPin = 16;
const int ledPin2 = 17;
const int ledPin3 = 5;

// change with your threshold value
const int threshold = 20;
// variable for storing the touch pin value 
int touchValue;

void setup(){
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  // initialize the LED pin as an output:
  pinMode (ledPin, OUTPUT);
  pinMode (ledPin2, OUTPUT);
  pinMode (ledPin3, OUTPUT);
}

void loop(){
  // read the state of the pushbutton value:
  touchValue = touchRead(touchPin);
  Serial.print(touchValue);
  // check if the touchValue is below the threshold
  // if it is, set ledPin to HIGH
 if(touchValue < threshold){
    // turn LED on
    digitalWrite(ledPin3, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin, HIGH);
    Serial.println(" - LED on");
    delay(1000);
    digitalWrite(ledPin, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin2, HIGH);
    Serial.println(" - LED on");
    delay(1000);
    digitalWrite(ledPin2, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin3, HIGH);
    Serial.println(" - LED on");
    delay(1000);
    digitalWrite(ledPin3, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin2, HIGH);
    Serial.println(" - LED on");
    delay(1000);
    digitalWrite(ledPin2, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin, HIGH);
    Serial.println(" - LED on");
    delay(1000);
    digitalWrite(ledPin, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin2, HIGH);
    Serial.println(" - LED on");
    delay(1000);
    digitalWrite(ledPin2, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin3, HIGH);
    Serial.println(" - LED on");
    delay(1000);
  }
  else{
    // turn LED off
    digitalWrite(ledPin, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin2, LOW);
    Serial.println(" - LED off");
    digitalWrite(ledPin3, LOW);
    Serial.println(" - LED off");
  }
}