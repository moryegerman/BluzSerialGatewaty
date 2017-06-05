// bluz serial transverter
void setup() {
    Serial.begin(38400);
    Serial1.begin(38400);
    Serial.println("Welcome to the bluz serial transverter!");
}

void loop() {
    while (Serial.available() > 0) {
        Serial1.write(Serial.read());
    }
    while (Serial1.available() > 0) {
        Serial.write(Serial1.read());
    }
}
