enum Pattern { P_SINGLE, P_CONVERGE, P_FILL };
Pattern pattern = P_FILL;
unsigned int stepMs = 1200;
unsigned long tChase = 0;
int step = 0;

const int LED[8] = { 13, 12, 14, 27, 26, 25, 33, 32 };

void setup() {
 Serial.begin(115200);
 for (int i = 0; i < 8; i++) pinMode(LED[i], OUTPUT);
}

void clearRow() { for (int i = 0; i < 8; i++) digitalWrite(LED[i], LOW); }

void serviceChaser() {
 if (millis() - tChase < stepMs) return; // not due yet
 tChase = millis();
 clearRow();
 switch (pattern) {
 	case P_SINGLE:
		digitalWrite(LED[step % 8], HIGH);
		break;
	case P_CONVERGE:
		digitalWrite(LED[step % 4], HIGH);
		digitalWrite(LED[7 - (step % 4)], HIGH);
		break;
	case P_FILL:
		for (int i = 0; i <= (step % 8); i++) digitalWrite(LED[i], HIGH);
		break;
 }
 step++;
}
void loop() {
 serviceChaser(); // never blocks
 //serviceBuzzer(); // added in Part E
 // the loop stays free for sensors in Experiment 3
}
