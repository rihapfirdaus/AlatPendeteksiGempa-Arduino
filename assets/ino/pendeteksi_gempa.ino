const int pinGetar = 3; 	
const int ledRed = 8;   	
const int ledGreen = 7; 	
 
void setup() {
Serial.begin (9600);    	
pinMode (ledRed, OUTPUT);   
pinMode (ledGreen, OUTPUT); 
}
 
void loop() {
int datadigital = digitalRead (pinGetar);
Serial.print ("Sensor : ");
Serial.print (datadigital);
 
if (datadigital == 1) {
  Serial.println (" mendeteksi getaran");
  digitalWrite (ledGreen, HIGH);
  digitalWrite (ledRed, LOW);
} else if (datadigital == 0) {
  Serial.println (" Tidak mendeteksi getaran");
  digitalWrite (ledGreen, LOW);
  digitalWrite (ledRed, HIGH);
}
}
