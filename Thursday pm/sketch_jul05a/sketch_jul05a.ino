void display(int digit);
void setup()
{
  Serial.begin(9600);

  pinMode(1, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop() 
{
  int nun;
  if(Serial.available())
  {
    num=Serial.read();
    dispay(num);
  }

}

void display(int digit)
{
  int val;
  int output;
  switch(digit%10)
  {
    case 0: 
      val=63;
      break ;
    case 1:
      val=6;
      break;
    case 2:
      val=44;
      break;
    case 3:
      val=48;
      break;
    case 4:
      val=25;
      break;
    case 5:
      val=18;
      break;
    case 6:
      val=2;
      break;
    case 7:
      val=120;
      break;
    case 8:
      val=0;
      break;
    case 9:
      val=16;
      break;
    default:
      break;
  }
  
  val ^=0x7f;
  val <<= 8;

  output &= ~0x7F00;
  output |= val;
  Serial.print(output);
}
