//
// sketch_21mmdda_example1.ino
//

// ---------------------------------------------------------

// First version: 2021-mm-dd HH:MM JST

// ---------------------------------------------------------

// Target Hardware:

// ---------------------------------------------------------
// ---------------------------------------------------------
// 全体構成 // Configuration
// ---------------------------------------------------------

#define ARDUINO_MAIN_FILE // This must be defined only in the main sketch file (effective in global.h)

// See config.h for the configuration of this sketch

// 以下の定義は config.h では管理していない
// The following definition is NOT managed in "config.h"
//   ...

// ---------------------------------------------------------
// ---------------------------------------------------------

#include <Arduino.h>
#include <MsTimer2.h>

#include "config.h"`
#include "debugLevel.h" // DEBUGMODE, DEBUGLEVEL, and DEBUGLEVEL_MAIN_SKETCH are defined in debugLevel.h
#include "myself.h"
#include "myNewClass.h"

// 123

// ---------------------------------------------------------

const byte g_interruptPin = 2;
// const byte g_interruptPin = 3;
volatile byte g_isr_state = 0;

// ---------------------------------------------------------

void isr() {
  // interrupt service routine.
  g_isr_state++;
}

// ---------------------------------------------------------

void tsr() {
  // timer service routine.
}

// ---------------------------------------------------------

void setup() {
  // while(!Serial){}
  Serial.begin(57600);
  showOpeningMessage();
  delay(1000);

  MsTimer2::set(500, tsr);
  MsTimer2::start();

  attachInterrupt(digitalPinToInterrupt(g_interruptPin), isr, CHANGE/*LOW|CHANGE|RISING|FALLING*/);
}

// ---------------------------------------------------------

void loop () {
  // MsTimer2::stop();
}

// ---------------------------------------------------------
