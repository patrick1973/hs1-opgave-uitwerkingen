void printCode(int code[])
{
  lcd.setCursor(0,0);
  if(code[0] > 0) lcd.print("*");
  if(code[1] > 0) lcd.print("*");
  if(code[2] > 0) lcd.print("*");
  if(code[3] > 0) lcd.print("*");
}

void printSystemState(String state)
{
  lcd.setCursor(0,1);
  lcd.print(state);
}
