/*
Started: Tuesday October 13, 2015
Finished: Thursday October 15, 2015

Creator: David Amante
Email: davidamante17@yahoo.com

Description: A brute force program to display 336 different piano scales.
*/

#include <iostream>
#include <string>

using namespace std;

int menu(int);
char repeat(char&);
void goodbye();

int main()
{
	char option;
	do
	{
		int choice;
		menu(choice);
		repeat(option);
	}while(option == 'y' || option == 'Y');
	goodbye();
	
	return 0;
}

int menu(int choice)
{
	int minor_choice, pentatonic_choice, exotic_choice, modal_choice;
	
	cout << "----Piano Scales----" << endl;
	cout << "1: Major Scales" << endl;
	cout << "2: Minor Scales" << endl;
	cout << "3: Blues Scales" << endl;
	cout << "4: Pentatonic Scales" << endl;
	cout << "5: Exotic Scales" << endl;
	cout << "6: Modal Scales" << endl;
	cout << "Pick one: ";
	cin >> choice;
	cout << endl;
	
	switch(choice)
	{
		case 1:
			cout << "----------Major Scale Formula--" << endl;
			cout << "X Major: T  T  S  T  T  T  S   " << endl;
			cout << endl;
			
			cout << "C Major: C  D  E  F  G  A  B  C" << endl;
			cout << "D Major: D  E  F# G  A  B  C# D" << endl;
			cout << "E Major: E  F# G# A  B  C# D# E" << endl;
			cout << "F Major: F  G  A  Bb C  D  E  F" << endl;
			cout << "G Major: G  A  B  C  D  E  F# G" << endl;
			cout << "A Major: A  B  C# D  E  F# G# A" << endl;
			cout << "B Major: B  C# D# E  F# G# A# B" << endl;
			cout << endl;
			
			cout << "C#/Db Major: Db Eb F  Gb Ab Bb C  Db" << endl;
			cout << "D#/Eb Major: Eb F  G  Ab Bb C  D  Eb" << endl;
			cout << "F#/Gb Major: F# G# A# B  C# D# F  F#" << endl;
			cout << "G#/Ab Major: Ab Bb C  Db Eb F  G  Ab" << endl;
			cout << "A#/Bb Major: Bb C  D  Eb F  G  A  Bb" << endl;
			break;
			
		case 2:
			cout << "1: Natural Minor Scales" << endl;
			cout << "2: Melodic Minor Scales" << endl;
			cout << "3: Harmonic Minor Scales" << endl;
			cout << "Pick one: ";
			cin >> minor_choice;
			cout << endl;
			
			switch(minor_choice)
			{
				case 1:
					cout << "----------Natural Minor Scale Formula--" << endl;
					cout << "X Natural Minor: T  S  T  T  S  T  T   " << endl;
					cout << endl;
					
					cout << "C Natural Minor: C  D  Eb F  G  Ab Bb C" << endl;
					cout << "D Natural Minor: D  E  F  G  A  Bb C  D" << endl;
					cout << "E Natural Minor: E  F# G  A  B  C  D  E" << endl;
					cout << "F Natural Minor: F  G  Ab Bb C  Db Eb F" << endl;
					cout << "G Natural Minor: G  A  Bb C  D  Eb F  G" << endl;
					cout << "A Natural Minor: A  B  C  D  E  F  G  A" << endl;
					cout << "B Natural Minor: B  C# D  E  F# G  A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Natural Minor: C# D# E  F# G# A  B  C#" << endl;
					cout << "D#/Eb Natural Minor: D# F  F# G# A# B  C# D#" << endl;
					cout << "F#/Gb Natural Minor: F# G# A  B  C# D  E  F#" << endl;
					cout << "G#/Ab Natural Minor: G# A# B  C# D# E  F# G#" << endl;
					cout << "A#/Bb Natural Minor: A# C  C# D# F  F# G# A#" << endl;
					break;
					
				case 2:
					cout << "----------Melodic Minor Scale Formula--" << endl;
					cout << "X Melodic Minor: T  S  T  T  T  T  S   " << endl;
					cout << endl;
					
					cout << "A Melodic Minor: A  B  C  D  E  F# G# A" << endl;
					cout << "B Melodic Minor: B  C# D  E  F# G# A# B" << endl;
					cout << "C Melodic Minor: C  D  Eb F  G  A  B  C" << endl;
					cout << "D Melodic Minor: C  D  Eb F  G  A  B  C" << endl;
					cout << "E Melodic Minor: E  F# G  A  B  C# D# E" << endl;
					cout << "F Melodic Minor: F  G  Ab Bb C  D  E  F" << endl;
					cout << "G Melodic Minor: G  A  Bb C  D  E  F# G" << endl;
					cout << endl;

					cout << "A#/Bb Melodic Minor: A# C  C# Eb F  G  A  A#" << endl;
					cout << "C#/Db Melodic Minor: C# Eb E  F# G# A# C  C#" << endl;
					cout << "D#/Eb Melodic Minor: D# F  F# G# A# C  D  D#" << endl;
					cout << "F#/Gb Melodic Minor: F# G# A  B  C# Eb F  F#" << endl;
					cout << "G#/Ab Melodic Minor: G# A# B  C# Eb F  G  F#" << endl;
					cout << endl;
					break;
					
				case 3:
					cout << "---------Harmonic Minor Scale Formula--" << endl;
					cout << "X Harmonic Minor: T  S  T  T  S  TS S  " << endl;
					cout << endl;
					
					cout << "A Harmonic Minor: A  B  C  D  E  F  G# A" << endl;
					cout << "B Harmonic Minor: B  C# D  E  F# G  A# B" << endl;
					cout << "C Harmonic Minor: C  D  Eb F  G  Ab B  C" << endl;
					cout << "D Harmonic Minor: D  E  F  G  A  Bb C# D" << endl;
					cout << "E Harmonic Minor: E  F# G  A  B  C  D# E" << endl;
					cout << "F Harmonic Minor: F  G  Ab Bb C  Db E  F" << endl;
					cout << "G Harmonic Minor: G  A  Bb C  D  Eb F# G" << endl;
					cout << endl;
					
					cout << "A#/Bb Harmonic Minor: A# C  C# Eb F  F# A  A#" << endl;
					cout << "C#/Db Harmonic Minor: C# Eb E  F# G# A  C  C#" << endl;
					cout << "D#/Eb Harmonic Minor: Eb F  F# G# A# B  D  Eb" << endl;
					cout << "F#/Gb Harmonic Minor: F# G# A  B  C# D  F  F#" << endl;
					cout << "G#/Ab Harmonic Minor: G# A# B  C# Eb E  G  G#" << endl;
					break;
			}
			break;
			
		case 3:	
			cout << "---------Pentatonic Blues Scale Formula--" << endl;
			cout << "X Pentatonic Blues: TS  T  S  S  TS  T  S" << endl;
			cout << endl;
			
			cout << "C Pentatonic Blues: C  Eb F  F# G  Bb C" << endl;
			cout << "D Pentatonic Blues: D  F  G  G# A  C  D" << endl;
			cout << "E Pentatonic Blues: E  G  A  A# B  D  E" << endl;
			cout << "F Pentatonic Blues: F  Ab Bb B  C  Eb F" << endl;
			cout << "G Pentatonic Blues: G  Bb C  C# D  F  G" << endl;
			cout << "A Pentatonic Blues: A  C  D  D# E  G  A" << endl;
			cout << "B Pentatonic Blues: B  D  E  F  F# A  B" << endl;
			cout << endl;
			
			cout << "C#/Db Pentatonic Blues: C# E  F# G  G# B  C#" << endl;
			cout << "D#/Eb Pentatonic Blues: D# F# G# A  A# C# D#" << endl;
			cout << "F#/Gb Pentatonic Blues: F# A  B  C  C# E  F#" << endl;
			cout << "G#/Ab Pentatonic Blues: G# B  C# D  D# F# G#" << endl;
			cout << "A#/Bb Pentatonic Blues: A# C# D# E  E# G# A#" << endl;
			cout << endl;
			break;
		
		case 4:
			cout << "1: Major Pentatonic Scales" << endl;
			cout << "2: Minor Pentatonic Scales" << endl;
			cout << "Pick one: ";
			cin >> pentatonic_choice;
			cout << endl;
			
			switch(pentatonic_choice)
			{
				case 1:
					cout << "--Major Pentatonic Scale Formula--" << endl;
					cout << "X Major Pentatonic: T  T  TS T  TS" << endl;
					cout << endl;
					
					cout << "C Major Pentatonic: C  D  E  G  A  C" << endl;
					cout << "D Major Pentatonic: D  E  F# A  B  D" << endl;
					cout << "E Major Pentatonic: E  F# G# B  C# E" << endl;
					cout << "F Major Pentatonic: F  G  A  C  D  F" << endl;
					cout << "G Major Pentatonic: G  A  B  D  E  G" << endl;
					cout << "A Major Pentatonic: A  B  C# E  F# A" << endl;
					cout << "B Major Pentatonic: B  C# D# F# G# B" << endl;
					cout << endl;

					cout << "C#/Db Major Pentatonic: C# D# F  G# A# C#" << endl;
					cout << "D#/Eb Major Pentatonic: D# F  G  A# C  D#" << endl;
					cout << "F#/Gb Major Pentatonic: F# G# A# C# D# F#" << endl;
					cout << "G#/Ab Major Pentatonic: G# A# C  D# F  G#" << endl;
					cout << "A#/Bb Major Pentatonic: A# C  D  F  G  A#" << endl;
					cout << endl;
					break;
					
				case 2:
					cout << "--Minor Pentatonic Scale Formula--" << endl;
					cout << "X Minor Pentatonic: TS T  T  TS T" << endl;
					cout << endl;	
					
					cout << "C Minor Pentatonic: C  Eb F  G  Bb C" << endl;
					cout << "D Minor Pentatonic: D  F  G  A  C  D" << endl;
					cout << "E Minor Pentatonic: E  G  A  B  D  E" << endl;
					cout << "F Minor Pentatonic: F  Ab Bb C  Eb F" << endl;
					cout << "G Minor Pentatonic: G  Bb C  D  F  G" << endl;
					cout << "A Minor Pentatonic: A  C  D  E  G  A" << endl;
					cout << "B Minor Pentatonic: B  D  E  F# A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Minor Pentatonic: C# E  F# G# B  C#" << endl;
					cout << "D#/Eb Minor Pentatonic: D# F# G# A# C# D#" << endl;
					cout << "F#/Gb Minor Pentatonic: F# A  B  C# E  F#" << endl;
					cout << "G#/Ab Minor Pentatonic: G# B  C# D# F# G#" << endl;
					cout << "A#/Bb Minor Pentatonic: A# C# D# E# G# A#" << endl;
					cout << endl;
					break;
			}
			break;
		
		case 5:
			cout << "1: Algerian Scale" << endl;
			cout << "2: Arabic Scale" << endl;
			cout << "3: Byzantine Scale" << endl;
			cout << "4: Chinese Scale" << endl;
			cout << "5: Egyptian Scale" << endl;
			cout << "6: Eight Tone Spanish" << endl;
			cout << "7: Enigmatic Scale" << endl;
			cout << "8: Hindu Scale" << endl;
			cout << "9: Hirajoshi Scale" << endl;
			cout << "10: Hungarian Scale" << endl;
			cout << "11: Japanese Scale" << endl;
			cout << "12: Romanian Minor Scale" << endl;
			cout << "13: Spanish Gypsy Scale" << endl;
			cout << "14: Maqam Scale" << endl;
			cout << "Pick one: ";
			cin >> exotic_choice;
			cout << endl;
			
			switch(exotic_choice)
			{
				case 1:
					cout << "------------Algerian Scale Formula" << endl;
					cout << "X Algerian: T  S  T  S  S  S  TS T" << endl;
					cout << endl;
					
					cout << "C Algerian: C  D  Eb F  Gb G  Ab B  C" << endl;
					cout << "D Algerian: D  E  F  G  G# A  A# C# D" << endl;
					cout << "E Algerian: E  F# G  A  A# B  C  D# E" << endl;
					cout << "F Algerian: F  G  Ab Bb B  C  Db E  F" << endl;
					cout << "G Algerian: G  A  Bb C  C# D  D# F# G" << endl;
					cout << "A Algerian: A  B  C  D  D# E  F  G# A" << endl;
					cout << "B Algerian: B  C# D  E  F  F# G  A# B" << endl;
					cout << endl;
					
					cout << "C#/Db Algerian: C# D# E  F# G  G# A  C  C#" << endl;
					cout << "D#/Eb Algerian: D# F  F# G# A  A# B  D  D#" << endl;
					cout << "F#/Gb Algerian: F# G# A  B  C  D# D  F  F#" << endl;
					cout << "G#/Ab Algerian: G# A# B  C# D  D# E  G  G#" << endl;
					cout << "A#/Bb Algerian: A# C  C# D# E  F  F# A  A#" << endl;
					cout << endl;
					break;					
				
				case 2:
					cout << "----------Arabic Scale Formula" << endl;
					cout << "X Arabic: T  T  S  S  T  T  T " << endl;
					cout << endl;
					
					cout << "C Arabic: C  D  E  F  F# G#  Bb C" << endl;
					cout << "D Arabic: D  E  F# G  G# A#  C  D" << endl;
					cout << "E Arabic: E  F# G# A  A# B#  D  E" << endl;
					cout << "F Arabic: F  G  A  Bb B  C#  Eb F" << endl;
					cout << "G Arabic: G  A  B  C  C# D#  F  G" << endl;
					cout << "A Arabic: A  B  C# D  D# E#  G  A" << endl;
					cout << "B Arabic: B  C# D# E  E# F## A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Arabic: C# D# E#  F# F## G## A## C#" << endl;
					cout << "D#/Eb Arabic: D# E# F## G# G## A## C#  D#" << endl;
					cout << "F#/Gb Arabic: F# G# A#  B  B#  C## E   F#" << endl;
					cout << "G#/Ab Arabic: G# A# B#  C# C## D## F#  G#" << endl;
					cout << "A#/Bb Arabic: A# B# C## D# D## E## G#  A#" << endl;
					cout << endl;
					break;
					
				case 3:
					cout << "---------------Byzantine Formula" << endl;
					cout << "X Byzantine: S  TS S  T  S  TS S" << endl;
					cout << endl;
				
					cout << "C Byzantine: C  C# E  F  G  G# B  C" << endl;
					cout << "D Byzantine: D  D# F# G  A  A# C# D" << endl;
					cout << "E Byzantine: E  F  G# A  B  C  D# E" << endl;
					cout << "F Byzantine: F  F# A  A# C  C# E  F" << endl;
					cout << "G Byzantine: G  G# B  C  D  D# F# G" << endl;
					cout << "A Byzantine: A  A# C# D  E  F  G# A" << endl;
					cout << "B Byzantine: B  C  D# E  F# G  A# B" << endl;
					cout << endl;
					
					cout << "C#/Db Byzantine: C# D  F  F# G# A  C  C#" << endl;
					cout << "D#/Eb Byzantine: D# E  G  G# A# B  D  D#" << endl;
					cout << "F#/Gb Byzantine: F# G  A# B  C# D  F  F#" << endl;
					cout << "G#/Ab Byzantine: G# A  C  C# D# E  G  G#" << endl;
					cout << "A#/Bb Byzantine: A# B  D  D# F  F# A  A#" << endl;
					cout << endl;
					break;
				
				case 4:
					cout << "---Chinese Scale Formula" << endl;
					cout << "X Chinese: TT T  S  TT S" << endl;
					cout << endl;
				
					cout << "C Chinese: C  E  F# G  B  C" << endl;
					cout << "D Chinese: D  F# G# A  C# D" << endl;
					cout << "E Chinese: E  G# A# B  D# E" << endl;
					cout << "F Chinese: F  A  B  C  E  F" << endl;
					cout << "G Chinese: G  B  C# D  F# G" << endl;
					cout << "A Chinese: A  C# D# E  G# A" << endl;
					cout << "B Chinese: B  D# E# F# A# B" << endl;
					cout << endl;
					
					cout << "C#/Db Chinese: Db F  G  Ab C  Db" << endl;
					cout << "D#/Eb Chinese: Eb G  A  Bb D  Eb" << endl;
					cout << "F#/Gb Chinese: F# A# B# C# E# F#" << endl;
					cout << "G#/Ab Chinese: Ab C  D  Eb G  Ab" << endl;
					cout << "A#/Bb Chinese: Bb D  E  F  A  Bb" << endl;
					cout << endl;
					break;
				
				case 5:
					cout << "---Egyptian Scale Formula" << endl;
					cout << "X Egyptian: T  TS T  TS T" << endl;
					cout << endl;
			
					cout << "C Egyptian: C  D  F  G  Bb C" << endl;
					cout << "D Egyptian: D  E  G  A  C  D" << endl;
					cout << "E Egyptian: E  F# A  B  D  E" << endl;
					cout << "F Egyptian: F  G  A# C  Eb F" << endl;
					cout << "G Egyptian: G  A  C  D  F  G" << endl;
					cout << "A Egyptian: A  B  D  E  G  A" << endl;
					cout << "B Egyptian: B  C# E  F# A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Egyptian: C# D# F# G# B  C#" << endl;
					cout << "D#/Eb Egyptian: D# F  G# A# C# D#" << endl;
					cout << "F#/Gb Egyptian: F# G# B  C# E  F#" << endl;
					cout << "G#/Ab Egyptian: G# A# C# D# F# G#" << endl;
					cout << "A#/Bb Egyptian: A# C  D# F  G# A#" << endl;
					cout << endl;
					break;
			
				case 6:
					cout << "------------Eight Tone Spanish Scale Formula" << endl;
					cout << "X Eight Tone Spanish: S  T  S  S  S  T  T  T" << endl;
					cout << endl;
		
					cout << "C Eight Tone Spanish: C  C# D# E  F  F# G# A# C" << endl;
					cout << "D Eight Tone Spanish: D  D# F  F# G  G# A# C  D" << endl;
					cout << "E Eight Tone Spanish: E  F  G  G# A  A# C  D  E" << endl;
					cout << "F Eight Tone Spanish: F  F# G# A  A# B  C# D# F" << endl;
					cout << "G Eight Tone Spanish: G  G# A# B  C  C# D# F  G" << endl;
					cout << "A Eight Tone Spanish: A  A# C  C# D  D# F  G  A" << endl;
					cout << "B Eight Tone Spanish: B  C  D  D# E  F  G  A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Eight Tone Spanish: C# D  E  F  F# G  A  B  C#" << endl;
					cout << "D#/Eb Eight Tone Spanish: D# E  F# G  G# A  B  C# D " << endl;
					cout << "F#/Gb Eight Tone Spanish: F# G  A  A# B  C  D  E  F#" << endl;
					cout << "G#/Ab Eight Tone Spanish: G# A  B  C  C# D  E  F# G#" << endl;
					cout << "A#/Bb Eight Tone Spanish: A# B  C# D  D# E  F# G# A#" << endl;
					cout << endl;
					break;
		
				case 7:
					cout << "------------Enigmatic Scale Formula" << endl;
					cout << "X Enigmatic: S  TS T  T  T  S  S" << endl;
					cout << endl;
			
					cout << "C Enigmatic: C  Db E  F# G# A# B  C" << endl;
					cout << "D Enigmatic: D  Eb F# G# A# C  C# D" << endl;
					cout << "E Enigmatic: E  F  G# A# C  D  D# E" << endl;
					cout << "F Enigmatic: F  Gb A  B  C# D# E  F" << endl;
					cout << "G Enigmatic: G  Ab B  C# D# F  F# G" << endl;
					cout << "A Enigmatic: A  Ab C# D# F  G  G# A" << endl;
					cout << "B Enigmatic: B  C  D# F  G  A  A# B" << endl;
					cout << endl;
					
					cout << "C#/Db Enigmatic: C# D  F  G  A  B  C  C#" << endl;
					cout << "D#/Eb Enigmatic: D# E  G  A  B  C# D  D#" << endl;
					cout << "F#/Gb Enigmatic: F# G  A# C  D  E  F  F#" << endl;
					cout << "G#/Ab Enigmatic: G# A  C  D  E  F# G  G#" << endl;
					cout << "A#/Bb Enigmatic: A# B  D  E  F# G# A  A#" << endl;
					cout << endl;
					break;
			
				case 8:
					cout << "---------Hindu Scale Formula" << endl;
					cout << "----------(Aeolian Dominant)" << endl;
					cout << "X Hindu: T  T  S  T  S  T  T" << endl;
					cout << endl;
			
					cout << "C Hindu: C  D  E  F  G  Ab Bb C" << endl;
					cout << "D Hindu: D  E  F# G  A  Bb C  D" << endl;
					cout << "E Hindu: E  F# G# A  B  C  D  E" << endl;
					cout << "F Hindu: F  G  A  Bb C  Db Eb F" << endl;
					cout << "G Hindu: G  A  B  C  D  Eb F  G" << endl;
					cout << "A Hindu: A  B  C# D  E  F  G  A" << endl;
					cout << "B Hindu: B  C# D# E  F# G  A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Hindu: C# D# F  F# G# A  B  C#" << endl;
					cout << "D#/Eb Hindu: Eb F  G  Ab Bb Cb Db Eb" << endl;
					cout << "F#/Gb Hindu: F# G# A# B  C# D  E  F#" << endl;
					cout << "G#/Ab Hindu: G# A# B# C# D# E  F# G#" << endl;
					cout << "A#/Bb Hindu: Bb C  D  Eb F  Gb Ab Bb" << endl;
					cout << endl;
					break;
			
				case 9:
					cout << "---Hirajoshi Scale Formula" << endl;
					cout << "X Hirajoshi: S  TT S  TT T" << endl;
					cout << endl;
			
					cout << "C Hirajoshi: C  Db F  Gb Bb C" << endl;
					cout << "D Hirajoshi: D  Eb G  Ab C  D" << endl;
					cout << "E Hirajoshi: E  F  A  Bb D  E" << endl;
					cout << "F Hirajoshi: F  Gb Bb B  Eb F" << endl;
					cout << "G Hirajoshi: G  Ab C  Db F  G" << endl;
					cout << "A Hirajoshi: A  B  D  Eb G  A" << endl;
					cout << "B Hirajoshi: B  C  E  F  A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Hirajoshi: C# D  F# G  B  C#" << endl;
					cout << "D#/Eb Hirajoshi: D# E  G# A  C# D#" << endl;
					cout << "F#/Gb Hirajoshi: F# G  B  C  E  F#" << endl;
					cout << "G#/Ab Hirajoshi: G# A  C# D  F# G#" << endl;
					cout << "A#/Bb Hirajoshi: A# B  D# E  G# A#" << endl;
					cout << endl;
					break;
			
				case 10:
					cout << "---------Hungarian Scale Formula" << endl;
					cout << "X Hungarian: T  S  TS S  S  TS S" << endl;
					cout << endl;
				
					cout << "C Hungarian: C  D  Eb F# G  Ab B  C" << endl;
					cout << "D Hungarian: D  E  F  G# A  Bb C# D" << endl;
					cout << "E Hungarian: E  F# G  A# B  C  D# E" << endl;
					cout << "F Hungarian: F  G  Ab B  C  Db E  F" << endl;
					cout << "G Hungarian: G  A  Bb C# D  Eb F# G" << endl;
					cout << "A Hungarian: A  B  C  D# E  F  G# A" << endl;
					cout << "B Hungarian: B  C# D  E# F# G  A# B" << endl;
					cout << endl;
					
					cout << "C#/Db Hungarian: C# D# E  F## G# A  B#  C#" << endl;
					cout << "D#/Eb Hungarian: D# E# F# G## A# B  C## D#" << endl;
					cout << "F#/Gb Hungarian: F# G# A  B#  C# D  E#  F#" << endl;
					cout << "G#/Ab Hungarian: G# A# B  C## D# E  F## G#" << endl;
					cout << "A#/Bb Hungarian: A# B# C# D## E# F# G## A#" << endl;
					cout << endl;
					break;
					
				case 11:
					cout << "---Japanese Scale Formula" << endl;
					cout << "-----------(In Sen Scale)" << endl;
					cout << "X Japanese: S  TT T  TS T" << endl;
					cout << endl;
					
					cout << "C Japanese: C  C# F  G  A# C" << endl;
					cout << "D Japanese: D  D# G  A  C  D" << endl;
					cout << "E Japanese: E  F  A  B  D  E" << endl;
					cout << "F Japanese: F  F# A# C  D# F" << endl;
					cout << "G Japanese: G  G# C  D  F  G" << endl;
					cout << "A Japanese: A  A# D  E  G  A" << endl;
					cout << "B Japanese: B  C  E  F# A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Japanese: C# D  F# G# B  C#" << endl;
					cout << "D#/Eb Japanese: D# E  G# A# C# D#" << endl;
					cout << "F#/Gb Japanese: F# G  B  C# E  F#" << endl;
					cout << "G#/Ab Japanese: G# A  C# D# F# G#" << endl;
					cout << "A#/Bb Japanese: A# B  D# F  G# A#" << endl;
					cout << endl;
					break;
					
				case 12:
					cout << "---------Romanian Minor Scale Formula" << endl;
					cout << "X Romanian Minor: T  S  TS S  T  S  T" << endl;
					cout << endl;
					
					cout << "C Romanian Minor: C  D  Eb F# G  A  A# C" << endl;
					cout << "D Romanian Minor: D  E  F  G# A  B  C  D" << endl;
					cout << "E Romanian Minor: E  F# G  A# B  C# D  E" << endl;
					cout << "F Romanian Minor: F  G  G# B  C  D  Eb F" << endl;
					cout << "G Romanian Minor: G  A  A# C# D  E  F  G" << endl;
					cout << "A Romanian Minor: A  B  C  Eb E  F# G  A" << endl;
					cout << "B Romanian Minor: B  C# D  F  F# G# A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Romanian Minor: C# Eb E  G  G# A# B  C#" << endl;
					cout << "D#/Eb Romanian Minor: Eb F  F# A  A# C  C# Eb" << endl;
					cout << "F#/Gb Romanian Minor: F# G# A  C  C# Eb E  F#" << endl;
					cout << "G#/Ab Romanian Minor: G# A# B  D  Eb F  F# G#" << endl;
					cout << "A#/Bb Romanian Minor: A# C  C# E  F  G  G# A#" << endl;
					cout << endl;
					break;
					
				case 13:
					cout << "---------Spanish Gypsy Scale Formula" << endl;
					cout << "X Spanish Gypsy: S  TS S  T  S  T  T" << endl;
					cout << endl;
			
					cout << "C Spanish Gypsy: C  C# E  F  G  G# A# C" << endl;
					cout << "D Spanish Gypsy: D  Eb F# G  A  A# C  D" << endl;
					cout << "E Spanish Gypsy: E  F  G# A  B  C  D  E" << endl;
					cout << "F Spanish Gypsy: F  F# A  A# C  C# Eb F" << endl;
					cout << "G Spanish Gypsy: G  G# B  C  D  Eb F  G" << endl;
					cout << "A Spanish Gypsy: A  A# C# D  E  F  G  A" << endl;
					cout << "B Spanish Gypsy: B  C  Eb E  F# G  A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Spanish Gypsy: C# D  F  F# G# A  B  C#" << endl;
					cout << "D#/Eb Spanish Gypsy: Eb E  G  G# A# B  C# Eb" << endl;
					cout << "F#/Gb Spanish Gypsy: F# G  A# B  C# D  E  F#" << endl;
					cout << "G#/Ab Spanish Gypsy: G# A  C  C# Eb E  F# G#" << endl;
					cout << "A#/Bb Spanish Gypsy: A# B  D  Eb F  F# G# A#" << endl;
					cout << endl;
					break;
					
				case 14:
					cout << "--------Maqam Scale Formula" << endl;
					cout << "X Maqam: (varies per scale)" << endl;
					cout << endl;
					
					cout << "C Maqam (Hijaz Kar Maqam): C  D  E  F  G  Ab B  C" << endl;
					cout << "D Maqam (Shahnaz): D  Eb F# G  A  Bb C# D" << endl;
					cout << "Eb Maqam (Maqam Mustar): Eb F# G  A  Bb C  D  Eb" << endl;
					cout << "F Maqam (Maqam Jiharkah): F  G  A  Bb C  D  Eb F" << endl;
					cout << "G Maqam (Shadd Araban): G  Ab B  C  D  Eb F# G" << endl;
					cout << "A Maqam (Suzidil): A  Bb C# D  E  F  G# A" << endl;
					cout << "Bb Maqam (Ajam Maqam): Bb C  D  Eb F  G  A# Bb" << endl;
					cout << endl;
					break;
			}
			break;
		
		case 6:
			cout << "1: Ionian Scale" << endl;
			cout << "2: Dorian Scale" << endl;
			cout << "3: Phrygian Scale" << endl;
			cout << "4: Lydian Scale" << endl;
			cout << "5: Mixolydian Scale" << endl;
			cout << "6: Aeolian Scale" << endl;
			cout << "7: Locrian Scale" << endl;
			cout << "Pick one: ";
			cin >> modal_choice;
			cout << endl;
			
			switch(modal_choice)
			{
				case 1:
					cout << "---------Ionian Scale Formula" << endl;
					cout << "X Ionian: T  T  S  T  T  T  S" << endl;
					cout << endl;
				
					cout << "C Ionian: C  D  E  F  G  A  B  C" << endl;
					cout << "D Ionian: D  E  F# G  A  B  C# D" << endl;
					cout << "E Ionian: E  F# G# A  B  C# D# E" << endl;
					cout << "F Ionian: F  G  A  Bb C  D  E  F" << endl;
					cout << "G Ionian: G  A  B  C  D  E  F# G" << endl;
					cout << "A Ionian: A  B  C# D  E  F# G# A" << endl;
					cout << "B Ionian: B  C# D# E  F# G# A# B" << endl;
					cout << endl;
					
					cout << "C#/Db Ionian: C# D# F  F# G# A# C  C#" << endl;
					cout << "D#/Eb Ionian: D# F  G  G# A# C  D  D#" << endl;
					cout << "F#/Gb Ionian: F# G# A# B  C# D# F  F#" << endl;
					cout << "G#/Ab Ionian: G# A# C  C# D# F  G  G#" << endl;
					cout << "A#/Bb Ionian: A# C  D  D# F  G  A  A#" << endl;
					cout << endl;
					break;
				
				case 2:
					cout << "---------Dorian Scale Formula" << endl;
					cout << "X Dorian: T  S  T  T  T  S  T" << endl;
					cout << endl;
		
					cout << "C Dorian: C  D  Eb F  G  A  Bb C" << endl;
					cout << "D Dorian: D  E  F  G  A  B  C  D" << endl;
					cout << "E Dorian: E  F# G  A  B  C# D  E" << endl;
					cout << "F Dorian: F  G  G# A# C  D  D# F" << endl;
					cout << "G Dorian: G  A  Bb C  D  E  F  G" << endl;
					cout << "A Dorian: A  B  C  D  E  F# G  A" << endl;
					cout << "B Dorian: B  C# D  E  F# G# A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Dorian: C# D# E  F# G# A# B  C#" << endl;
					cout << "D#/Eb Dorian: D# F  F# G# A# C  C# D#" << endl;
					cout << "F#/Gb Dorian: F# G# A  B  C# D# E  F#" << endl;
					cout << "G#/Ab Dorian: G# A# B  C# D# F  F# G#" << endl;
					cout << "A#/Bb Dorian: A# C  C# D# F  G  G# A#" << endl;
					cout << endl;
					break;
		
				case 3:
					cout << "---------Phrygian Scale Formula" << endl;
					cout << "X Phrygian: S  T  T  T  S  T  T" << endl;
					cout << endl;
					
					cout << "C Phrygian: C  Db Eb F  G  Ab Bb C" << endl;
					cout << "D Phrygian: D  Eb F  G  A  Bb C  D" << endl;
					cout << "E Phrygian: E  F  G  A  B  C  D  E" << endl;
					cout << "F Phrygian: F  F# G# A# C  C# D# F" << endl;
					cout << "G Phyrgian: G  G# A# C  D  D# F  G" << endl;
					cout << "A Phyrgian: A  Bb C  D  E  F  G  A" << endl;
					cout << "B Phyrgian: B  C  D  E  F# G  A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Phrygian: C# D  E  F# G# A  B  C#" << endl;
					cout << "D#/Eb Phrygian: D# E  F# G# A# B  C# D#" << endl;
					cout << "F#/Gb Phrygian: F# G  A  B  C# D  E  F#" << endl;
					cout << "G#/Ab Phrygian: G# A  B  C# D# E  F# G#" << endl;
					cout << "A#/Bb Phrygian: A# B  C# D# F  F# G# A#" << endl;
					cout << endl;
					break;
	
				case 4:
					cout << "---------Lydian Scale Formula" << endl;
					cout << "X Lydian: T  T  T  S  T  T  S" << endl;
					cout << endl;

					cout << "C Lydian: C  D  E  F# G  A  B  C" << endl;
					cout << "D Lydian: D  E  F# G# A  B  C# D" << endl;
					cout << "E Lydian: E  F# G# A# B  C# D# E" << endl;
					cout << "F Lydian: F  G  A  B  C  D  E  F" << endl;
					cout << "G Lydian: G  A  B  C# D  E  F# G" << endl;
					cout << "A Lydian: A  B  C# D# E  F# G# A" << endl;
					cout << "B Lydian: B  C# D# F  F# G# A# B" << endl;
					cout << endl;
					
					cout << "C#/Db Lydian: C# D# F  G  G# A# C  C#" << endl;
					cout << "D#/Eb Lydian: D# F  G  A  A# C  D  D#" << endl;
					cout << "F#/Gb Lydian: F# G# A# C  C# D# F  F#" << endl;
					cout << "G#/Ab Lydian: G# A# C  D  D# F  G  G#" << endl;
					cout << "A#/Bb Lydian: Bb C  D  E  F  G  A  Bb" << endl;
					cout << endl;
					break;

				case 5:
					cout << "---------Mixolydian Scale Formula" << endl;
					cout << "X Mixolydian: T  T  S  T  T  S  T" << endl;
					cout << endl;
		
					cout << "C Mixolydian: C  D  E  F  G  A  Bb C" << endl;
					cout << "D Mixolydian: D  E  F# G  A  B  C  D" << endl;
					cout << "E Mixolydian: E  F# G# A  B  C# D  E" << endl;
					cout << "F Mixolydian: F  G  A  Bb C  D  Eb F" << endl;
					cout << "G Mixolydian: G  A  B  C  D  E  F  G" << endl;
					cout << "A Mixolydian: A  B  C# D  E  F# G  A" << endl;
					cout << "B Mixolydian: B  C# D# E  F# G# A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Mixolydian: C# D# E#  F# G# A#  B  C#" << endl;
					cout << "D#/Eb Mixolydian: D# E# F## G# A# B#  C# D#" << endl;
					cout << "F#/Gb Mixolydian: F# G# A#  B  C# D#  E  F#" << endl;
					cout << "G#/Ab Mixolydian: G# A# B#  C# D# E#  F# G#" << endl;
					cout << "A#/Bb Mixolydian: A# B# C## D# E# F## G# A#" << endl;
					cout << endl;
					break;
		
				case 6:
					cout << "---------Aeolian Scale Formula" << endl;
					cout << "X Aeolian: T  S  T  T  S  T  T" << endl;
					cout << endl;
		
					cout << "C Aeolian: C  D  Eb F  G  Ab Bb C" << endl;
					cout << "D Aeolian: D  E  F  G  A  Bb C  D" << endl;
					cout << "E Aeolian: E  F# G  A  B  C  D  E" << endl;
					cout << "F Aeolian: F  G  Ab Bb C  Db Eb F" << endl;
					cout << "G Aeolian: G  A  Bb C  D  Eb F  G" << endl;
					cout << "A Aeolian: A  B  C  D  E  F  G  A" << endl;
					cout << "B Aeolian: B  C# D  E  F# G  A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Aeolian: C# D# E  F# G# A  B  C#" << endl;
					cout << "D#/Eb Aeolian: Eb F  Gb Ab Bb Cb Db Eb" << endl;
					cout << "F#/Gb Aeolian: F# G# A  B  C# D  E  F#" << endl;
					cout << "G#/Ab Aeolian: G# A# B  C# D# E  F# G#" << endl;
					cout << "A#/Bb Aeolian: Bb C  Db Eb F  Gb Ab Bb" << endl;
					cout << endl;
					break;
		
				case 7:
					cout << "---------Locrian Scale Formula" << endl;
					cout << "X Locrian: S  T  T  S  T  T  T" << endl;
					cout << endl;			
					
					cout << "C Locrian: C  C# D# F  F# G# A# C" << endl;
					cout << "D Locrian: D  D# F  G  G# A# C  D" << endl;
					cout << "E Locrian: E  F  G  A  A# C  D  E" << endl;
					cout << "F Locrian: F  F# G# A# B  C# D# F" << endl;
					cout << "G Locrian: G  G# A# C  C# D# F  G" << endl;
					cout << "A Locrian: A  A# C  D  Eb F  G  A" << endl;
					cout << "B Locrian: B  C  D  E  F  G  A  B" << endl;
					cout << endl;
					
					cout << "C#/Db Locrian: C# D  E  F# G  A  B  C#" << endl;
					cout << "D#/Eb Locrian: Eb E  F# F# A  B  C# Eb" << endl;
					cout << "F#/Gb Locrian: F# G  A  B  C  D  E  F#" << endl;
					cout << "G#/Ab Locrian: G# A  B  C# D  E  F# G#" << endl;
					cout << "A#/Bb Locrian: A# B  C# D# E  F# G# A#" << endl;
					cout << endl;
					break;
			}
			break;
	}
	
}

char repeat(char& option)
{
	cout << "Do you want to try again?" << endl;
	cin >> option;
	while(option != 'y' && option != 'Y' && option != 'n' && option != 'N')
	{
		cout << "Y/N answers only!" << endl;
		cin >> option;
	}
	cout << endl;
	return option;
}

void goodbye()
{
	string p = "Goodbye!";
	
	cout << p;
}
