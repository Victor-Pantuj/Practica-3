float resistenciaA=1000000;
float resistenciaB=100000;

void setup ()
{
Serial.begin (9600);
}
void loop ()
{
float Vol=(analogRead(0)*5)/1023.0;
float SUMA=(Vol/(resistenciaB/(resistenciaA+resistenciaB)));
Serial.print(SUMA) ;
Serial.print(" Voltaje") ;
Serial.println();
delay(500);
}