const int led = 14;
const int sensor = 12;
const int delayTime = 50;
int firstTime = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data = digitalRead(sensor);
    if(data == HIGH)
    {
        digitalWrite(led, HIGH);
        firstTime = millis();
    }
    if(millis()- firstTime > delayTime)
    {
        digitalWrite(led, LOW);
    }
}
