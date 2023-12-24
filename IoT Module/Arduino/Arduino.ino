// Pin definitions
const int redPin = 9;     // Connect the red pin of RGB LED to digital pin 9
const int greenPin = 10;  // Connect the green pin of RGB LED to digital pin 10
const int bluePin = 11;   // Connect the blue pin of RGB LED to digital pin 11
char receivedData = '\0';
#define RX_PIN 2  // Define the RX pin on the Arduino
#define TX_PIN 3  // Define the TX pin on the Arduino

void setup() {
  // Initialize RGB LED pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(115200);  // Use the same baud rate as on the ESP32
  Serial.println("Arduino is ready");
  Serial.setTimeout(100);
  // Additional setup code
}

// You can add any additional setup code here

void loop() {
  if (Serial.available() > 0) {
    receivedData = Serial.read();
    Serial.println(receivedData);
    handlePayload(receivedData);
  }

  // You can add your main loop code here
}

void handlePayload(char payload) {
  // Process the received payload and perform actions accordingly
  if (payload == '1') {
    controlLEDs(1, 1, 0);
  } else if (payload == '2') {
    controlLEDs(1, 0, 1);
  } else if (payload == '3') {
    controlLEDs(1, 1, 1);
  } else if (payload == '4') {
    blinkAllLEDs();
  } else if (payload == '5') {
    controlLEDs(0, 0, 0);
  } else {
    // Handle unrecognized payloads
    Serial.println("Received an unrecognized payload");
  }
}
void controlLEDs(int red, int green, int blue) {
  digitalWrite(redPin, red);
  digitalWrite(greenPin, green);
  digitalWrite(bluePin, blue);
}

// Function to blink all LEDs in a loop
void blinkAllLEDs() {
  for (int i = 0; i < 10; i++) {
    char a = '\0';
    controlLEDs(0, 0, 0);  // no light
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }
    delay(500);
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }

    controlLEDs(0, 0, 1);  // blue
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }
    delay(500);
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }

    controlLEDs(0, 1, 0);  // green
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }
    delay(500);
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }

    controlLEDs(0, 1, 1);  // cyan
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }
    delay(500);
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }

    controlLEDs(1, 0, 0);  // red
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }
    delay(500);
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }

    controlLEDs(1, 0, 1);  // magenta
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }
    delay(500);
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }

    controlLEDs(1, 1, 0);  // yellow
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }
    delay(500);
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }

    controlLEDs(1, 1, 1);  // Red
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }
    delay(500);
    a = Serial.read();
    if (a == '1') {
      break;
    } else if (a == '2') {
      break;
    } else if (a == '3') {
      break;
    } else if (a == '4') {
      break;
    } else if (a == '5') {
      break;
    }
  }
}
