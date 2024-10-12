// Define the pins
int sensor_pin = A0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode( sensor_pin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 int sensor_data = analogRead(sensor_pin);
 Serial.println(sensor_data);
 if(sensor_data >= 1000){
  Serial.println("No moisture,Soil is dry");
 }
 else if (sensor_data >= 500 && sensor_data <=700)
 {
  Serial.println("There is some moisture,Soil is medium");
 }
 else if(sensor_data <= 400)
 {
  Serial.println("Soil is wet");
 }
} 
