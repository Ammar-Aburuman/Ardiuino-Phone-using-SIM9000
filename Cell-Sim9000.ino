Updates to keyboard shortcuts … 
On Thursday, August 1, 2024, Drive keyboard shortcuts will be updated to give you first-letters navigation.Learn more

#include <SoftwareSerial.h>
SoftwareSerial SIM900(2,3);

void setup()
{
  SIM900.begin(9600);
  Serial.begin(9600);
  delay(2000);
}

void loop(){
  Serial.println("country is assumed to be Jordan with phone code (+962-....) ");
  delay(1000);
  Serial.println("So just enter your number after. (eg: 798307716 )");
  delay(1000);
  Serial.println("Please enter a number ()");
  while (Serial.available() == 0){

  }

  String number = Serial.readString();
  // Serial.println(number);

  SIM900.print("AT");
  Serial.println("AT");
  delay(1000);

  SIM900.print("ATD+"); SIM900.print(91); SIM900.print(number);
  Serial.print("ATD+"); Serial.print(91); Serial.println(number); 
  Serial.println("\n"); 
  Serial.print("Dialing");
  delay(1000);
  Serial.print(".");
  delay(1000);
  Serial.print(".");
  delay(1000);
  Serial.println(".");
  delay(17000); // dial-tone



  SIM900.println("ATH"); //hang up
  Serial.println("ATH [Hang up]"); //hang up

  do {} while (1);
}
