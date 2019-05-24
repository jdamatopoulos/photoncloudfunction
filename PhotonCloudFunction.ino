int red = D5;
int blue = D4;
int yellow = D3;
int changeColour(String colour);

void setup() {
    pinMode(red, OUTPUT);
    pinMode(blue, OUTPUT);
    pinMode(yellow, OUTPUT);
    
    bool success = Particle.function("changeColour", changeColour);
}

void loop() {

}

int changeColour(String colour)
{
    if(colour == "red")
    {
        digitalWrite(red, HIGH);
        delay(2000);
        digitalWrite(red, LOW);
        return 1;
    }
    if(colour == "blue")
    {
        digitalWrite(blue, HIGH);
        delay(2000);
        digitalWrite(blue, LOW);
        return 1;
    }
    if(colour == "yellow")
    {
        digitalWrite(yellow, HIGH);
        delay(2000);
        digitalWrite(yellow, LOW);
        return 1;
    }
}