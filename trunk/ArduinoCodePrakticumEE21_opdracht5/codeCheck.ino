 int checkValue(int waarde)
{
  if ( waarde > ( 1023- 25)  && waarde < (1023 + 25))
  {
    return 1023;
  }
  else if ( waarde > ( 513- 25)  && waarde < (513 + 25))
  {
    return 513;
  }
  else if ( waarde > ( 340- 25)  && waarde < (340 + 25))
  {
    return 340;
  }
  else if ( waarde > ( 254- 25)  && waarde < (254 + 25))
  {
    return 254;
  }
  else if ( waarde > ( 0- 25)  && waarde < (0 + 25))
  {
    return 0;
  }
  return -99;
}

boolean readCode(int waarde, int *code)
{

  static boolean ingevuld = false;
  static int index = 0;

  if ((waarde > 0) && (ingevuld == false))
  {
    ingevuld = true;
    code[index]=waarde;
    if (index < 3)
    {
      index++;
    }
    else if ( index >= 3 )
    {
      Serial.print("Code is ingevuld en is: ");
      index = 0;
      return true;
    }
  }
  if (waarde == 0)
  {
    ingevuld = false;
  }
  return false;
}

boolean controleerCode(int *code, const int correctCode[])
{
  if (correctCode[0] == code[0] && correctCode[1] == code[1] && correctCode[2] == code[2] && correctCode[3] == code[3] )
  {
    return true;
  }
  else
  {
    return false;
  }
}

void cleanCodeArray(int *code)
{
  for (int i=0; i<4; i++)// clean up the array;
  {
    code[i] = 0;
  }
}



