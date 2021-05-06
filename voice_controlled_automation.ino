/*Voice Controlled Home Automation with Bluetooth*/

#define light 7   // connect light to pin 7
#define fan 8    //connect fan to pin 8
char c;         //define character c

void setup()
{
  Serial.begin(9600);    //begin the serial monitor
  pinMode(light,OUTPUT); // set pin to output
  pinMode(fan,OUTPUT);   // set pin to output
}

void loop()
{
  while(Serial.available())   //Check if any byte is available to 
  {
    c=Serial.read();         // read the byte  
    if(c=="#")               // exit the loop after # is detected 
    {
      break;
    }  
  }
  
  
  {
    Serial.println(c);           // display the recieved byte on the serial monitor
    if(c=='A')                  // if the character received is 'A'
    {
      digitalWrite(light,HIGH); // switch on the light
      
    }
    else if (c=='a')
    {
      digitalWrite(light,LOW);  //switch of the light
    }
    if(c=='B')                  // if character recieved is 'B' 
    {
      digitalWrite(fan,HIGH);   // switch on the fan
      
    }
    else if (c=='b')
    {
      digitalWrite(fan,LOW);    // switch off the fan
    }
    
  }
}

