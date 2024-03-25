void ButtonSetup() {
  btn1.begin(4);
  btn2.begin(13);
  btn3.begin(16);
  btn4.begin(17);
  btn5.begin(19);
  btn6.begin(20);
  btn7.begin(21);
  btn8.begin(22);
  btn9.begin(23);
  btn10.begin(25);
  btn11.begin(26);
  btn12.begin(27);
}

void ButtonHandle() {
  if (btn1.debounce()) {
    data = 1;
    Serial.println("Button 1 - Moose 1");
  }
  if (btn2.debounce()) {
    data = 2;
    Serial.println("Button 2 - Moose 2");
  }
  if (btn3.debounce()) {
    data = 3;
    Serial.println("Button 3 - Moose 3");
  }
  if (btn4.debounce()) {
    data = 4;
    Serial.println("Button 4 - Bison 1");
  }
  if (btn5.debounce()) {
    data = 5;
    Serial.println("Button 5 - Bison 2");
  }
  if (btn6.debounce()) {
    data = 6;
    Serial.println("Button 3 - Bison 3");
  }
  if (btn7.debounce()) {
    data = 7;
    Serial.println("Button 7 - M&B 1");
  }
  if (btn8.debounce()) {
    data = 8;
    Serial.println("Button 8 - M&B 2");
  }
  if (btn9.debounce()) {
    data = 9;
    Serial.println("Button 9 - M&B 3");
  }
  if (btn10.debounce()) {
    data = 10;
    Serial.println("Button 10 - Quit Animation");
  }
  if (btn11.debounce()) {
    data = 11;
    Serial.println("Button 11 - Volume Up");
  }
  if (btn12.debounce()) {
    data = 12;
    Serial.println("Button 12 - Volume Down");
  }
}