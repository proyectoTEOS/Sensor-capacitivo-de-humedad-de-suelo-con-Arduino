# Sensor de temperatura y humedad del sensor DHT22
Mide los niveles de humedad del suelo mediante detección capacitiva con Arduino.

### Requisitos
- Tener el IDE de [Arduino](https://www.arduino.cc/en/Main/Software) (o el de tu preferencia) con la versión más actual
- Tener el material para hacer el proyecto

### Código
**[Aquí](https://github.com/proyectoTEOS/Sensor-capacitivo-de-humedad-del-suelo-con-Arduino/blob/master/Sensor-capacitivo-de-humedad-del-suelo-con-Arduino.ino)** podrás obtener el link del código, también dejaremos una vista previa aquí abajo.

```c++
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

```

### Diagrama
El siguiente esquemático muestra como se debe conectar todos los componentes con la placa.
![](https://github.com/proyectoTEOS/Sensor-capacitivo-de-humedad-del-suelo-con-Arduino/blob/master/Sensor-capacitivo-de-humedad-del-suelo-con-Arduino.jpg)
