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
  }
  if (btn2.debounce()) {
    data = 2;
  }
  if (btn3.debounce()) {
    data = 3;
  }
  if (btn4.debounce()) {
    data = 4;
  }
  if (btn5.debounce()) {
    data = 5;
  }
  if (btn6.debounce()) {
    data = 6;
  }
  if (btn7.debounce()) {
    data = 7;
  }
  if (btn8.debounce()) {
    data = 8;
  }
  if (btn9.debounce()) {
    data = 9;
  }
  if (btn10.debounce()) {
    data = 10;
  }
  if (btn11.debounce()) {
    data = 11;
  }
  if (btn12.debounce()) {
    data = 12;
  }
}