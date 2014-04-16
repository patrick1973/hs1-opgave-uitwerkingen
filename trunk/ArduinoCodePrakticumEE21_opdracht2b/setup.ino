// function will be called only when setup() is called
// this function will setup the io connections en some pre settings.
void setupIo()
{
  Serial.begin(9600);          // set up the serial connection at a speed of 9600 baud

  pinMode(BUTTON_1,INPUT);     // setup button 1
  pinMode(BUTTON_2,INPUT);     // setup button 2
  pinMode(LED_PIN,OUTPUT);     // setup led 

  debouncer_button1.attach(BUTTON_1); // connect button 1 to the bounce object
  debouncer_button1.interval(5);      // setup the debounce interval to 5 Ms. 

  debouncer_button2.attach(BUTTON_2); // connect button 2 to the bounce object
  debouncer_button2.interval(5);      // setup the debounce interval to 5 Ms. 
  
  digitalWrite(LED_PIN,ledState); // write the led to LOW because ledState is initialized at LOW
  printSerialMenu();           // call the function to print the small menu in the serial monitoi
}


