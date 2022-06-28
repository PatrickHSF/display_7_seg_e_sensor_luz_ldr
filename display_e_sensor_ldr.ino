/* ACENDE O DISPLAY DE 7 SEGUIMENTOS REFERENTE A LUMINOSIDADE  */

/* SENSOR LDR - SENSOR DE LUZ */
int Sensor_LDR = 0; 
int Pin_LDR = A0; 
int Pin_LED = 11; 

/* DECLARANDO VAREAVEIS PARA O DISPLAY */
int a = 9;
int b = 8;
int c = 3;
int d = 4;
int e = 5;
int f = 7;
int g = 6;

void setup() {
  pinMode(Pin_LDR, INPUT); 
  /* Define o pino do LDR comoENTRADA. */
  pinMode(Pin_LED, OUTPUT);
  /* Define o pino do LED como SAÍDA. */
  Serial.begin(9600); 
  /* Inicia a comunicação serial.*/

  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
}

void loop() {
  Sensor_LDR = analogRead(Pin_LDR); /* A variável recebe os
  dados lidos no pino A0. */
  Serial.println(Sensor_LDR); /* Imprime o valor lido
  do LDR (0 a 1023). */
  delay(100);
  if ( Sensor_LDR > 300 && Sensor_LDR < 400 ) {
    /* SE O LED FOR > QUE NUMERO SERIAL LIDO E MENOR QUE...
    /* NUMERO 3 */
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);

  } else if ( Sensor_LDR > 400 && Sensor_LDR < 500 ) {
    /* NUMERO 4 */
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  } else if ( Sensor_LDR > 500 && Sensor_LDR < 600 ) {
    /* NUMERO 5 */
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  } else if ( Sensor_LDR > 600 && Sensor_LDR < 700 ) {
    /* NUMERO 6 */
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  } else if ( Sensor_LDR > 700 && Sensor_LDR < 800 ) {
    /* NUMERO 7 */
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  } else if ( Sensor_LDR > 800 && Sensor_LDR < 900 ) {
    /* NUMERO 8 */
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  } else if ( Sensor_LDR > 900 ) {
    /* NUMERO 9 */
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  } else {
    /* LEDS DESLIGADO DO DISPLAY */
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
  }
}
