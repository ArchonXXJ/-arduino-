


// 每个点/划/空 均为1s
// 空格 即为 空
// 规定两个空格为换行
// 串口外设 收到1点亮灯泡直到收到零；

int translation(char input);
void line(void)
{
  Serial.print(1);
  delay(1000);
  Serial.print(0);
}

void dot(void)
{
  Serial.print(1);
  delay(100);
  Serial.print(0);
  delay(900);
}


void none(void)
{
  delay(1000);
}


void setup() 
{
  Serial.begin(9600);
  
  
}

void loop() 
{
  char input;
  input = Serial.read();
  if (input == -1)
    Serial.print(0);
  else
    translation(input);
}



int translation(char input)
{
  switch(input)
  {
    case ' ':
      none();
    case '\n':
      none();
      none();
    case 'a':
      line();
      dot();
      break;
    case 'b':
      line();
      dot();
      dot();
    break;
    case 'c':
      line();
      dot();
      line();
      dot();
      break;
    case 'd':
      line();
      dot();
      dot();
      break;
    case 'e':
      dot();
      break;
    case 'f':
      dot();
      dot();
      line();
      dot();
      break;
    case 'g':
      dot();
      line();
      line();
      line();
      break;
     case 'h':
      dot();
      dot();
      dot();
      dot();
      break;
     case 'i':
      dot();
      dot();
      break;
     case 'j':
      dot();
      line();
      line();
      line();
      break;
     case 'k':
      line();
      dot();
      line();
      break;
     case 'l':
      dot();
      line();
      dot();
      dot();
      break;
     case 'm':
      line();
      line();
      break;
     case 'n':
      line();
      dot();
      break;
     case 'o':
      line();
      line();
      line();
      break;
     case 'p':
      dot();
      line();
      line();
      dot();
     case 'q':
      line();
      line();
      dot();
      line();
      break;
     case 'r':
      dot();
      line();
      dot:
      break;
     case 's':
      dot();
      dot();
      dot();
      break;
     case 't':
      line();
     case 'u':
      dot();
      dot();
      line();
      break;
     case 'v':
      dot();
      dot();
      dot();
      line();
      break;
     case 'w':
      dot();
      line();
      line();
      break;
     case 'x':
      line();
      dot();
      dot();
      line();
      break;
     case 'y':
      line();
      dot();
      line();
      line();
      break;
     case 'z':
      line();
      line();
      dot();
      dot();
      break;
     default:
      break;
  }
}
