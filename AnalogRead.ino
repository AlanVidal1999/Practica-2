void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}
int pot1 = 0;
int x=0;
void loop() 
{
  delay(1000);
  pot1 = analogRead(A0);
  x= map(pot1,0,1023,0,45);
  Serial.print("Grados:");
  Serial.print(x);
  Serial.println("C");
   //Imprimir con salto de linea
}
