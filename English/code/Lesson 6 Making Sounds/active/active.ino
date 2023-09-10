//www.elegoo.com
//2023.05.06

int buzzer = 12;//the pin of the active buzzer
int sound_duration = 500;

void setup()
{
  pinMode(buzzer, OUTPUT); //initialize the buzzer pin as an output
}
void loop()
{
  /*
  for (int i = 0; i < 20; i++)
  {
    //use the if function to gradually shorten the interval of the sound
    sound_duration -= 25;
    //activate the active buzzer
    digitalWrite(buzzer, HIGH);
    delay(sound_duration);//wait for sound_duration ms
    //deactivate the active buzzer
    digitalWrite(buzzer, LOW);
    delay(sound_duration);//wait for sound_duration ms
  }
  //activate the active buzzer
  digitalWrite(buzzer, HIGH);
  delay(5000);//keep playing sound for 5 seconds.
  digitalWrite(buzzer, LOW);
  delay(500);
  sound_duration = 500;
  */
}
