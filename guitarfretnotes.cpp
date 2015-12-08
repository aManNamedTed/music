#include <iostream>

using namespace std;

void gstring(int);

int main()
{
	cout << "Notes of the fretboard on a guitar" << endl << endl;
	for(int i = 0; i < 6; i++)
	{
		cout << "   1  2  3  4  5 6  7  8  9  10 11  12" << endl;
		gstring(i);
		cout << endl;
	}
	
	return 0;
}

void gstring(int i)
{
	switch(i)
	{
		case 0:
			cout << "E: F  F# G  G# A A# B  C  C# D  D#  E" << endl;
			break;
		case 1:
			cout << "B: C  C# D  D# E F  F# G  G# A  A#  B" << endl;
			break;
		case 2:
			cout << "G: G# A  A# B  C C# D  D# E  F  F#  G" << endl;
			break;
		case 3:
			cout << "D: D# E  F  F# G G# A  A# B  C  C#  D" << endl;
			break;
		case 4:
			cout << "A: A# B  C  C# D D# E  F  F# G  G#  A" << endl;
			break;
		case 5:
			cout << "E: F  F# G  G# A A# B  C  C# D  D#  E" << endl;
			break;
	}
}
