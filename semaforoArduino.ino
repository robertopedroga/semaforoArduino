///////////////////////////////////////////////////
//Autor: Roberto Carlos Santos Pedroga           //
//Professor: Pedro Cândido do Nascimento Filho   //
//Disciplina: Engenharia Tecnológica             //
//Turma: 8º de Eng. Civil                        //
//Data: 15/04/2020                               //
///////////////////////////////////////////////////

//Declaração das variáveis do tipo inteiro que representam os pinos da placa
int ledVerde=3;
int ledAmarelo=5;
int ledVermelho=7;

void setup() //Configuração inicial
{
//Declaração dos pinos de saída
  pinMode(ledVerde,OUTPUT);
  pinMode(ledAmarelo,OUTPUT);
  pinMode(ledVermelho,OUTPUT);
}

void loop() //Rotina padrão
{
  digitalWrite(ledVerde,HIGH);//Acender luz Verde
  delay(2000);//Esperar 2 segundos
  digitalWrite(ledVerde,LOW);//Apagar luz Verde
  digitalWrite(ledAmarelo,HIGH);//Acender luz Amarela
  delay(1000);//Esperar 1 segundo
  digitalWrite(ledAmarelo,LOW);//Apagar luz Amarela
  digitalWrite(ledVermelho,HIGH);//Acender luz Vermelha
  delay(2000);//Esperar 2 segundos
  digitalWrite(ledVermelho,LOW);//Apagar luz Vermelha
}
