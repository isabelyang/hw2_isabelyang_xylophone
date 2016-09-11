SYSTEM_MODE(SEMI_AUTOMATIC);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(D0, INPUT_PULLUP);
  pinMode(D1, INPUT_PULLUP);
  pinMode(D2, INPUT_PULLUP);
  pinMode(D3, INPUT_PULLUP);
  pinMode(D4, INPUT_PULLUP);
  pinMode(D5, INPUT_PULLUP);
  pinMode(D6, INPUT_PULLUP);
  pinMode(D7, INPUT_PULLUP);
  pinMode(D8, INPUT_PULLUP);
  pinMode(D9, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(D0) == LOW) {
    delay(100);
    if (digitalRead(D1) == LOW) {
      Serial.print("J");
    }
    else if (digitalRead(D2) == LOW) {
      Serial.print("K");
    }
    else if (digitalRead(D3) == LOW) {
      Serial.print("L");
    }
    else if (digitalRead(D4) == LOW) {
      Serial.print("M");
    }
    else if (digitalRead(D5) == LOW) {
      Serial.print("N");
    }
    else if (digitalRead(D6) == LOW) {
      Serial.print("O");
    }
    else if (digitalRead(D7) == LOW) {
      Serial.print("P");
    }
    else if (digitalRead(D8) == LOW) {
      Serial.print("Q");
    }
    else if (digitalRead(D9) == LOW) {
      Serial.print("1");
    }
    else {
      Serial.print("A");
    }
    delay(300);
  }

  if (digitalRead(D1) == LOW) {
    delay(100);
    if (digitalRead(D2) == LOW) {
      Serial.print("R");
    }
    else if (digitalRead(D3) == LOW) {
      Serial.print("S");
    }
    else if (digitalRead(D4) == LOW) {
      Serial.print("T");
    }
    else if (digitalRead(D5) == LOW) {
      Serial.print("U");
    }
    else if (digitalRead(D6) == LOW) {
      Serial.print("V");
    }
    else if (digitalRead(D7) == LOW) {
      Serial.print("W");
    }
    else if (digitalRead(D8) == LOW) {
      Serial.print("X");
    }
    else {
      Serial.print("B");
    }
    delay(300);
  }

  if (digitalRead(D2) == LOW) {
    delay(100);
    if (digitalRead(D3) == LOW) {
      Serial.print("Y");
    }
    else if (digitalRead(D4) == LOW) {
      Serial.print("Z");
    }
    else {
      Serial.print("C");
    }
    delay(300);
  }

  if (digitalRead(D3) == LOW) {
    Serial.print("D");
    delay(300);
  }

  if (digitalRead(D4) == LOW) {
    Serial.print("E");
    delay(300);
  }

  if (digitalRead(D5) == LOW) {
    Serial.print("F");
    delay(300);
  }

  if (digitalRead(D6) == LOW) {
    Serial.print("G");
    delay(300);
  }

  if (digitalRead(D7) == LOW) {
    Serial.print("H");
    delay(300);
  }

  if (digitalRead(D8) == LOW) {
    Serial.print("I");
    delay(300);
  }

  if (digitalRead(D9) == LOW) {
    Serial.print(" ");
    delay(300);
  }

}


