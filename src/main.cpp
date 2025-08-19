#include <Arduino.h>
#include <git_revision.h>

#include <project_config.h>

void setup() {
  Serial.begin(115200);
  Serial.println("Hello, world!");
  Serial.printf("Git commit: %s, Remote REPO: %s\n", __GIT_COMMIT__, __GIT_REMOTE_URL__);


  //Initialize the LED_BUILTIN pin as an output
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  //Turn the LED on
  digitalWrite(LED_BUILTIN, HIGH);
  //Wait for 1 second
  delay(1000);
  //Turn the LED off
  digitalWrite(LED_BUILTIN, LOW);
   //Wait for 1 second
  delay(1000);
}
