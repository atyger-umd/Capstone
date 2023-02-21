#include <Arduino.h>
#include <WiFi.h>

const char* ssid     = "abby_bot";

void setup() {
  Serial.begin(115200);
  Serial.println("\n[*] Creating AP");
  WiFi.mode(WIFI_AP);
  WiFi.softAP(ssid, NULL);
  Serial.print("[+] AP Created with IP Gateway ");
  Serial.println(WiFi.softAPIP());
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}