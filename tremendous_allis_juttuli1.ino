int l1=13;
int l2=12;
int l3=11;
int l4=8;

void setup()
{
  pinMode(l1, OUTPUT);
  pinMode(l2, OUTPUT);
  pinMode(l3, OUTPUT);
  pinMode(l4, OUTPUT);
}

void loop()
{
  digitalWrite(l1, HIGH);
  delay(1000); 
  digitalWrite(l1, LOW);
  delay(1000);
  digitalWrite(l2, HIGH);
  delay(1000); 
  digitalWrite(l2, LOW);
  delay(1000);
  digitalWrite(l3, HIGH);
  delay(1000); 
  digitalWrite(l3, LOW);
  delay(1000);
  digitalWrite(l4, HIGH);
  delay(1000); 
  digitalWrite(l4, LOW);
  delay(1000);
 
}