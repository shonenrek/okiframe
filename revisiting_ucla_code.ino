/*Modification of UCLA Game Lab Arcade Backpack source code, original github link is
 * https://github.com/uclagamelab/ArcadeBackpackBlueprints/blob/a3ab109bc061390b269dcb5bcd97dc356f165cc1/ArcadeBackpackFabPackage/standard_layout.pde
 * This code is being released as a public domain example
*/

#include <Bounce.h>

// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.

//action buttons, pins 0-16
//main buttons are pins 0-7, 8-11 are dpad, 12-13 are l3 and r3, rest are start select home
Bounce button0 = Bounce(0, 10);
Bounce button1 = Bounce(1, 10);  // 10 = 10 ms debounce time
Bounce button2 = Bounce(2, 10);  // which is appropriate for
Bounce button3 = Bounce(3, 10);  // most mechanical pushbuttons
Bounce button4 = Bounce(4, 10);
Bounce button5 = Bounce(5, 10);
Bounce button6 = Bounce(6, 10);
Bounce button7 = Bounce(7, 10);
Bounce button8 = Bounce(8, 10);
Bounce button9 = Bounce(9, 10);
Bounce button10 = Bounce(10, 10);
Bounce button11 = Bounce(11, 10);
Bounce button12 = Bounce(12, 10);
Bounce button13 = Bounce(13, 10);
Bounce button14 = Bounce(14, 10);
Bounce button15 = Bounce(15, 10);
Bounce button16 = Bounce(16, 10);

//update directions later, pins 20-23
Bounce button20 = Bounce(20, 10);
Bounce button21 = Bounce(21, 10);
Bounce button22 = Bounce(22, 10);
Bounce button23 = Bounce(23, 10);

boolean u = false;
boolean d = false;
boolean l = false;
boolean r = false;

void setup() {
  // Configure the pins for input mode with pullup resistors.
  // The pushbuttons connect from each pin to ground.  When
  // the button is pressed, the pin reads LOW because the button
  // shorts it to ground.  When released, the pin reads HIGH
  // because the pullup resistor connects to +5 volts inside
  // the chip.  LOW for "on", and HIGH for "off" may seem
  // backwards, but using the on-chip pullup resistors is very
  // convenient.  The scheme is called "active low", and it's
  // very commonly used in electronics... so much that the chip
  // has built-in pullup resistors!
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);  // Teensy++ LED, may need 1k resistor pullup
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);

  pinMode(20, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);
  pinMode(22, INPUT_PULLUP);
  pinMode(23, INPUT_PULLUP);
}

void loop() {
  //These lines just center the right stick so it doesn't get in the way
  Joystick.Z(512);
  Joystick.Zrotate(512);
  Joystick.hat(-1);
  // Update all the buttons.  There should not be any long
  // delays in loop(), so this runs repetitively at a rate
  // faster than the buttons could be pressed and released.
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();
  button12.update();
  button13.update();
  button14.update();
  button15.update();
  button16.update();


  button20.update();
  button21.update();
  button22.update();
  button23.update();
  

  // Check each button for "falling" edge.
  // Update the Joystick buttons only upon changes.
  // falling = high (not pressed - voltage from pullup resistor)
  //           to low (pressed - button connects pin to ground)
  if (button0.fallingEdge()) {
    Joystick.button(1, 1);
  }
  if (button1.fallingEdge()) {
    Joystick.button(2, 1);
  }
  if (button2.fallingEdge()) {
    Joystick.button(8, 1);
  }
  if (button3.fallingEdge()) {
    Joystick.button(7, 1);
  }
  if (button4.fallingEdge()) {
    Joystick.button(3, 1);
  }
  if (button5.fallingEdge()) {
    Joystick.button(4, 1);
  }
  if (button6.fallingEdge()) {
    Joystick.button(6, 1);
  }
  if (button7.fallingEdge()) {
    Joystick.button(5, 1);
  }
  if (button8.fallingEdge()) {
    Joystick.button(13, 1);
  }
  if (button9.fallingEdge()) {
    Joystick.button(15, 1);
  }
  if (button10.fallingEdge()) {
    Joystick.button(14, 1);
  }
  if (button11.fallingEdge()) {
    Joystick.button(16, 1);
  }
  if (button12.fallingEdge()) {
    Joystick.button(12, 1);
  }
  if (button13.fallingEdge()) {
    Joystick.button(11, 1);
  }
  if (button14.fallingEdge()) {
    Joystick.button(10, 1);
  }
  if (button15.fallingEdge()) {
    Joystick.button(9, 1);
  }
  if (button16.fallingEdge()) {
    Joystick.button(17, 1);
  }

  
 //section for the lever, make 20-23 
  if (button20.fallingEdge()) {
    u = true;
  }
  if (button21.fallingEdge()) {
    d = true;
  }
  if (button22.fallingEdge()) {
    r = true;
  }
  if (button23.fallingEdge()) {
    l = true;
  }

  // Check each button for "rising" edge
  // Update the Joystick buttons only upon changes.
  // rising = low (pressed - button connects pin to ground)
  //          to high (not pressed - voltage from pullup resistor)
  if (button0.risingEdge()) {
    Joystick.button(1, 0);
  }
  if (button1.risingEdge()) {
    Joystick.button(2, 0);
  }
  if (button2.risingEdge()) {
    Joystick.button(8, 0);
  }
  if (button3.risingEdge()) {
    Joystick.button(7, 0);
  }
  if (button4.risingEdge()) {
    Joystick.button(3, 0);
  }
  if (button5.risingEdge()) {
    Joystick.button(4, 0);
  }
  if (button6.risingEdge()) {
    Joystick.button(6, 0);
  }
  if (button7.risingEdge()) {
    Joystick.button(5, 0);
  }
  if (button8.risingEdge()) {
    Joystick.button(13, 0);
  }
  if (button9.risingEdge()) {
    Joystick.button(15, 0);
  }
  if (button10.risingEdge()) {
    Joystick.button(14, 0);
  }
  if (button11.risingEdge()) {
    Joystick.button(16, 0);
  }
  if (button12.risingEdge()) {
    Joystick.button(12, 0);
  }
  if (button13.risingEdge()) {
    Joystick.button(11, 0);
  }
  if (button14.risingEdge()) {
    Joystick.button(10, 0);
  }
  if (button15.risingEdge()) {
    Joystick.button(9, 0);
  }
  if (button16.risingEdge()) {
    Joystick.button(17, 0);
  }

  
 //more lever stuff, pins 20-23 again 
  if (button20.risingEdge()) {
    u = false;
  }
  if (button21.risingEdge()) {
    d = false;
  }
  if (button22.risingEdge()) {
    r = false;
  }
  if (button23.risingEdge()) {
    l = false;
  }
  
  
  //lever if statements
  if(l) Joystick.X(0);
  else if (r) Joystick.X(1023);
  else Joystick.X(512);
  
  if(u) Joystick.Y(0);
  else if (d) Joystick.Y(1023);
  else Joystick.Y(512);
}
