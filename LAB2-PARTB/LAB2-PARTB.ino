const int LED[8] = { 13, 12, 14, 27, 26, 25, 33, 32 }; 
  
void setup() { 
  Serial.begin(115200); 
  for (int i = 0; i < 8; i++) pinMode(LED[i], OUTPUT); 
} 
  
void loop() {                       // walk once to prove all eight 
  for (int i = 0; i < 8; i++) { 
    digitalWrite(LED[i], HIGH); delay(150); 
    digitalWrite(LED[i], LOW); 
  } 
} 