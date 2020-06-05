/*
  Created by TEOS
  Domotic with Arduino https://goo.gl/btZpjs
  YouTube https://goo.gl/k7TUSZ
  Instagram https://goo.gl/zEIjia
  Facebook https://goo.gl/eivraR
  Twitter https://goo.gl/du5Wgn
  Github https://goo.gl/Xl5IiS
  WEB https://www.proyecto-teos.com
*/
const uint8_t soilPinT = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  char toCharSoilT[3], resultSerialT[4];
  uint16_t soilMoistureT;

  soilMoistureT = map(analogRead(soilPinT), 320, 740, 100, 0);
  soilMoistureT = constrain(soilMoistureT, 0, 100);

  dtostrf(soilMoistureT, 3, 0, toCharSoilT);

  sprintf(resultSerialT, toCharSoilT);
  strcat(resultSerialT, "%");
  Serial.println(resultSerialT);

  delay(1000);
}
