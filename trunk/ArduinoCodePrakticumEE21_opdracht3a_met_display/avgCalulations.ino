int avgValue(int Value)
{
  const int ARRAY_SIZE = 10;
  static int readings[ARRAY_SIZE] = {0,0,0,0,0,0,0,0,0}; // the readings from the analog input
  static int index = 0;                                  // the index of the current reading
  static int total = 0;                                  // the running total
  static int average = 0;                                // the average

  // subtract the last reading:
  total -= readings[index];  
  // read from the sensor:  
  readings[index] = Value; 
  // add the reading to the total:
  total += readings[index];       
  // advance to the next position in the array:  
  index++;                    

  if (index >= ARRAY_SIZE)
  {   
    index = 0; 
  }    

  average = total / ARRAY_SIZE;  
  delay (1);
  return average;
}



