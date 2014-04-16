// this function is used to read the user input from the serial monitor.
void readSerialInput()
{
  if ( Serial.available() >0 )                  // if there is any data available on the serial connection
  {
    logicFunction = Serial.read()- '0';         // read the data and transfer it to the variable logicFunction
    Serial.println();                           // print an empty line
    Serial.print("The selected choice is : ");  // print the text The selected choice is : 
    if (logicFunction == 1 )                    // check user input 
    {
      Serial.println("XOR");                    // and print text.
    }
    else if (logicFunction == 2)
    {
      Serial.println("OR");
    }
    else if (logicFunction == 3)
    {
      Serial.println("AND");
    }
    else 
    {
      Serial.println("Wrong choice!! please select a valid number");
    } 
  }
}

// function to print the small menu in the serial monitor.
void printSerialMenu()
{
  Serial.println("Choose a functie:");
  Serial.println("(1) for XOR :");
  Serial.println("(2) for OR :");
  Serial.println("(3) for AND :");
}


