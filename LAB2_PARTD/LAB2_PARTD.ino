const int LAMP_PIN = 4; 
  
void setup() { 
  ledcAttach(LAMP_PIN, 5000, 8);        
} 
  
void setBrightness(uint8_t level) { 
  ledcWrite(LAMP_PIN, level); 
} 
  
void rampDemo() { 
  for (int d = 0; d <= 255; d += 5) { setBrightness(d); delay(30); } 
  for (int d = 255; d >= 0; d -= 5) { setBrightness(d); delay(30); } 
}