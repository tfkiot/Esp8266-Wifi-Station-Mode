#include<ESP8266WiFi.h>   

#define WIFI_SSID "Asus 8z"        
#define WIFI_PSWD "00000000"      

void setup() {
 Serial.begin(115200);               

 Serial.println(" ");
 WiFi.begin(WIFI_SSID, WIFI_PSWD);    
 Serial.print(" Connecting to ");
 Serial.print(WIFI_SSID);
 Serial.println(" .....");
 
 int i = 0;
 while(WiFi.status() != WL_CONNECTED){
  delay(600);
  i++;
  Serial.print(i);
  Serial.print(" ");
 }
Serial.println(" ");
Serial.println("Connected: ");
Serial.print("Ip Address:  ");
Serial.println(WiFi.localIP());
Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:

}
