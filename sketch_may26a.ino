int bekleme;
void setup() {
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
pinMode (5, OUTPUT);
}

void loop() {
for( int i=0; i<512; i++)
{    
  bekleme=10;
  Adim1();
  Adim2();
  Adim3();
  Adim4();
  }
  
for( int i=0; i<512; i++)
{    
  bekleme=2;
  Adim4();
  Adim3();
  Adim2();
  Adim1();
  }


}

void Adim1()
{
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(bekleme);
  }
void Adim2()
{
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(bekleme);
  }

void Adim3()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  delay(bekleme);
  }

 void Adim4()
{
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, HIGH);
  delay(bekleme);
  }
  
