void updateSateMachine( boolean statusCode )
{
  static States _states;          // _states mag niet terug naar 0 springen tijdens aanroep van de functie. maar moet zijn vorige waarde vast houden
//  Serial.print("State is:");
//  Serial.print(_states);
//  Serial.print("------Code Status is ");
//  Serial.println(statusCode);
  switch ( _states )
  {
  case SystemDisArmed : 
    printSystemState("SystemDisArmed  ");
    if (statusCode)
    {
      _states = SystemIdle;
    }
    break;

  case SystemArmed:
    printSystemState("SystemArmed     ");
    if (statusCode)
    {
      _states = SystemDisArmed;
    }
    break;

  case  SystemIdle:  
    printSystemState("SystemIdle      ");
    if (statusCode)
    {
      _states = SystemDisArmed;
    }
    break;

  case AlarmActivated:
   printSystemState("AlarmActivated  ");
    break;

  }
}


