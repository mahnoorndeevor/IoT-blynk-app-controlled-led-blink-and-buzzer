
#define BLYNK_TEMPLATE_ID           "TMPLMz5hipVP"
#define BLYNK_DEVICE_NAME           "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "MFzMugmRfu67ERaufDhjiuAJ5hVESg1V"
#define BLYNK_FIRMWARE_VERSION "0.1.1"
#define BLYNK_PRINT Serial


char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Apna lgao";
char pass[] = "Saima03352677411";

#define APP_DEBUG
#define SERIAL_DEBUG

#include <ESP8266WiFi.h> 
#include <ESP8266WebServer.h>
#include <WiFiManager.h>   
#include <BlynkSimpleEsp8266.h>

int ledpin = D0;
int buzzpin = D1;
BLYNK_WRITE(V0)
{
  // Set incoming value from pin V0 to a variable
  int pinvalue = param.asInt();

  // Update state
  digitalWrite(ledpin, pinvalue);
}
  BLYNK_WRITE(V1)
{
  // Set incoming value from pin V0 to a variable
  int pinvalue = param.asInt();

  // Update state
  digitalWrite(buzzpin, pinvalue);
}

void setup() 
{
  // put your setup code here, to run once:
Serial.begin(9600);
delay(100);
pinMode(ledpin, OUTPUT);
pinMode(buzzpin, OUTPUT);
Blynk.begin(auth, ssid, pass);
}

void loop() 
{
  // put your main code here, to run repeatedly:
 Blynk.run();
 Serial.println(V0);
 delay(2);
 Serial.println(V1);
 delay(2);
}
