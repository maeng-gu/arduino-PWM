
#include "D:\\Data\\arduino_work\\file_access\\pitches.h"

#define Melody_pin 2
#define Melody_gippyMicros 20

#define Melody_interrupt
//#define Melody_general

//#define Melody_Tiger
//#define Melody_ScchoolBell
#define Melody_Tetris

#if defined(Melody_Tiger)
uint16_t Melody_score[] = {
	NOTE_C7, NOTE_G6, NOTE_E6, NOTE_D6, NOTE_E6, NOTE_D6, NOTE_E6, NOTE_C6, 0,
	NOTE_G6, NOTE_C6, NOTE_E6, NOTE_G6, NOTE_E6, NOTE_D6, NOTE_E6, NOTE_D6, NOTE_E6, NOTE_C6, 0,
	
	NOTE_C7, NOTE_C7, NOTE_G6, NOTE_G6, NOTE_E6, NOTE_D6, NOTE_E6, NOTE_D6, NOTE_E6, NOTE_C6, 0, 

	NOTE_G6, NOTE_6, 
	
	
	NOTE_A6, NOTE_A6, NOTE_A6, NOTE_A6, NOTE_A6, NOTE_A6, NOTE_A6, NOTE_C6, NOTE_C6, NOTE_A6, NOTE_G6, NOTE_A6, NOTE_G6, 0, 
	NOTE_C7, NOTE_G6, NOTE_E6, NOTE_D6, NOTE_E6, NOTE_C6, NOTE_E6, NOTE_C6, 0,
	NOTE_C6, NOTE_C6, NOTE_G6, NOTE_G6, NOTE_E6, NOTE_D6, NOTE_C6, 0,
	NOTE_C7, NOTE_G6, NOTE_E6, NOTE_D6, NOTE_E6, NOTE_C6, NOTE_E6, NOTE_C6, 0,
	NOTE_C6, NOTE_C6, NOTE_G6, NOTE_G6, NOTE_E6, NOTE_D6, NOTE_C6, 0};

uint16_t Melody_noteLengthBeats[] = {2, 2, 8, 8, 8, 8, 4, 4, 4,
									4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 4,
									4, 4, 4, 4, 8, 8, 8, 8, 4, 4, 4,
									4, 4, 4, 4, 4, 4, 2, 0,
									4, 4, 2, 4, 4, 2, 4, 4, 2, 8, 8, 4, 4, 4,
									2, 2, 8, 8, 8, 8, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4
	};
#endif



#if defined(Melody_ScchoolBell)
uint16_t Melody_score[] = {
	0,NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4, 0,
	NOTE_G4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, 0,
	NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_G4, NOTE_G4, NOTE_E4, 0,
	NOTE_G4, NOTE_E4, NOTE_D4, NOTE_E4, NOTE_C4, 0, 0
	};
uint16_t Melody_noteLengthBeats[] = {4, 4, 4, 4, 4, 4, 4, 4,
    								 4, 4, 4, 4, 4, 4, 
    								 4, 4, 4, 4, 4, 4, 4,
    								 4, 4, 4, 4, 4, 4, 4};

#endif


	
#if defined(Melody_Tetris)
/* Tetris Melody */
uint16_t Melody_score[] = {
   	NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, 
    NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
    NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
    NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2, 
    NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5, 
    NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
    NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5, 
    NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0, 
    NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, 
    NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
    NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
    NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2, 
    NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5, 
    NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
    NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5, 
    NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0,
    NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, 
    NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
    NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_A3, NOTE_E3, NOTE_A2, NOTE_E3, 
    NOTE_GS3, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3, 
    NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, 
    NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
    NOTE_C4, NOTE_E3, NOTE_E4, NOTE_E3, NOTE_A4, NOTE_E3, NOTE_A2, NOTE_E3, 
    NOTE_GS4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3,
    NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, 
    NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
    NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
    NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2, 
    NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5, 
    NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
    NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5, 
    NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0, 
    NOTE_E5, NOTE_E3, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_C5, 
    NOTE_B4, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_A3, NOTE_D5,
    NOTE_C5, NOTE_B4, NOTE_E4, NOTE_G4, NOTE_C5, NOTE_D5, NOTE_E3, NOTE_E5,
    NOTE_E3, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_A4, NOTE_A3, NOTE_B2, 
    NOTE_C3, NOTE_D3, NOTE_D5, NOTE_F5, NOTE_A5, NOTE_C5, NOTE_C5, NOTE_G5, 
    NOTE_F5, NOTE_E5, NOTE_C3, 0, NOTE_C5, NOTE_E5, NOTE_A4, NOTE_G4, NOTE_D5,
    NOTE_C5, NOTE_B4, NOTE_E4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_G4, NOTE_E5, 
    NOTE_G4, NOTE_C5, NOTE_E4, NOTE_A4, NOTE_E3, NOTE_A4, 0,
    NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, 
    NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
    NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_A3, NOTE_E3, NOTE_A2, NOTE_E3, 
    NOTE_GS3, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3, 
    NOTE_E4, NOTE_E3, NOTE_A2, NOTE_E3, NOTE_C4, NOTE_E3, NOTE_A2, NOTE_E3, 
    NOTE_D4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_B3, NOTE_E3, NOTE_GS2, NOTE_E3,
    NOTE_C4, NOTE_E3, NOTE_E4, NOTE_E3, NOTE_A4, NOTE_E3, NOTE_A2, NOTE_E3, 
    NOTE_GS4, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3, NOTE_GS2, NOTE_E3,
   };

 
 //note durations: 4 = quarter note, 8 = eighth note, etc
uint16_t Melody_noteLengthBeats[] = {
   8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
   8,4,8,8,16,16,8,8,8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,4,
   8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
   8,4,8,8,16,16,8,8,8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,4,
   8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
   8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
   8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
   8,4,8,8,16,16,8,8,8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,4,
   8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
   8,4,8,8,16,16,8,8,8,8,8,8,8,16,16,8,8,8,8,8,8,8,8,8,8,8,8,8,8,4,4,
   8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
   8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,
   };
#endif



#if defined(Melody_interrupt)

volatile uint32_t Melody_toneCounter = 0;
volatile uint32_t Melody_lengthCounter = 0;
volatile uint16_t Melody_processFlag = 0;

uint32_t currentMillis, Melody_previousMillis;
uint32_t previousMillis= 0;
uint32_t Melody_toneMatchVal = 0;
uint32_t Melody_lengthMatchVal = 0;

uint16_t Melody_noteLength = 125;
uint16_t Melody_noteInterval = 325;

uint16_t Melody_thisNote = 0;
uint16_t Melody_thisNoteCount = (sizeof(Melody_score) / sizeof(uint16_t));


/////////////////////////////////////////////////
void setup()
{
  	pinMode(Melody_pin, OUTPUT);
  	Init_Timer1_COMA();
  	Serial.begin(9600);
	Melody_previousMillis = 0;
	previousMillis = 0;
}
/////////////////////////////////////////////////


/////////////////////////////////////////////////
// per 20us Interrupt(Output compare match A)
void Init_Timer1_COMA(void)
{
// initialize timer1 
  	noInterrupts();           // disable all interrupts
  	TCCR1A = 0;
  	TCCR1B = 0;
  	TCNT1  = 0;

  	OCR1A = 39;               // per 20us => interrupt
  	TCCR1B |= (1 << WGM12);   // CTC mode
  	TCCR1B |= (1 << CS11);    // 8 prescaler 
  	TIMSK1 |= (1 << OCIE1A);  // enable timer compare interrupt
  	interrupts(); 			// enable all interrupts
}
/////////////////////////////////////////////////


/////////////////////////////////////////////////
ISR(TIMER1_COMPA_vect)          // timer compare interrupt service routine
{
	if(Melody_processFlag == 1) {
		Melody_toneCounter = 0;
		Melody_lengthCounter = 0;
		Melody_processFlag = 0;
	}
	else {
		Melody_toneCounter++;
		Melody_lengthCounter++;
		if(Melody_toneCounter == Melody_toneMatchVal) {
			Melody_toneCounter = 0;
			digitalWrite(Melody_pin, !digitalRead(Melody_pin));
		}

		if(Melody_lengthCounter == Melody_lengthMatchVal) {
			Melody_lengthCounter = 0;
//			digitalWrite(Melody_pin, LOW);
		}
	}
	
}
/////////////////////////////////////////////////


/////////////////////////////////////////////////
void loop()
{
	currentMillis = millis();
	if(currentMillis - Melody_previousMillis >= Melody_noteInterval) {
		Melody_previousMillis = currentMillis;
		Melody_noteLength = 1000 / Melody_noteLengthBeats[Melody_thisNote];
		Melody_noteInterval = Melody_noteLength * 1.3 ;
		Melody_genTone(Melody_score[Melody_thisNote], Melody_noteLength);
		Melody_thisNote = (Melody_thisNote + 1) % Melody_thisNoteCount;
	}
}
/////////////////////////////////////////////////


////////////////////////////////////////////////////////////
void Melody_genTone(uint16_t freq, uint16_t length)
{
	Melody_processFlag = 1;
	if(freq == 0) 
		Melody_toneMatchVal = 0;
	else 
		Melody_toneMatchVal = 1000000 / (Melody_gippyMicros * freq * 2) + 0.5;

	Melody_lengthMatchVal = 1000 * length / Melody_gippyMicros ;
}
/////////////////////////////////////////////////////////////
#endif // Melody_interrupt



/*****************************************************************
******************************************************************/


#if defined(Melody_general)
uint16_t Melody_noteLength = 125;
uint16_t Melody_noteInterval = 1000;

uint32_t currentMillis, Melody_previousMillis;
uint32_t currentMicros, Melody_previousMicros;
uint16_t Melody_thisNote = 0;
uint16_t Melody_thisNoteCount = (sizeof(Melody_score) / sizeof(uint16_t));

uint32_t Melody_toneCounter = 0;
uint32_t Melody_lengthCounter = 0;
uint32_t Melody_toneMatchVal = 0;
uint32_t Melody_lengthMatchVal = 0;
uint16_t Melody_processFlag = 0;
//uint16_t Melody_pinState = 0;

void setup()
{
//	Serial.begin(9600);
	pinMode(Melody_pin, OUTPUT);
	Melody_previousMillis = 0;
	Melody_previousMicros = 0;
}


void loop()
{
	currentMillis = millis();
	currentMicros = micros();

	if(currentMicros - Melody_previousMicros >= Melody_gippyMicros) {
		Melody_previousMicros = currentMicros;
		if(Melody_processFlag == 1) {
			Melody_toneCounter = 0;
			Melody_lengthCounter = 0;
			Melody_processFlag = 0;
		}
		else {
			Melody_toneCounter++;
			Melody_lengthCounter++;
			if(Melody_toneCounter == Melody_toneMatchVal) {
				Melody_toneCounter = 0;
				digitalWrite(Melody_pin, !digitalRead(Melody_pin));
			}

			if(Melody_lengthCounter == Melody_lengthMatchVal) {
				Melody_lengthCounter = 0;
			}
		}
	}
	

	if(currentMillis - Melody_previousMillis >= Melody_noteInterval) {
		Melody_previousMillis = currentMillis;
		Melody_noteLength = 1000 / Melody_noteLengthBeats[Melody_thisNote];
		Melody_noteInterval = Melody_noteLength * 1.3 ;
		Melody_genTone(Melody_score[Melody_thisNote], Melody_noteLength);
//		tone(2, Melody_score[Melody_thisNote], Melody_noteLength); 
		Melody_thisNote = (Melody_thisNote + 1) % Melody_thisNoteCount;
	}
}

////////////////////////////////////////////////////////////
void Melody_genTone(uint16_t freq, uint16_t length)
{
	Melody_processFlag = 1;
	if(freq == 0) 
		Melody_toneMatchVal = 0;
	else 
		Melody_toneMatchVal = 100000 / (freq * 2);

	Melody_lengthMatchVal = 1000 * length / Melody_gippyMicros;
}
/////////////////////////////////////////////////////////////

#endif // Melody_general defined





