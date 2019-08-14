#include "../BitSet.h"
#include "../Timer.h"

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

const unsigned int n = 4;
const unsigned int m = 3;
const unsigned int nm = n * m;

const unsigned int size = 4;

bool masks[size][n][m] = {{{1,1,1},{1,1,1},{0,0,0},{0,0,0}},
						  {{0,1,0},{0,1,0},{0,1,1},{0,0,0}},
						  {{0,0,0},{0,1,1},{0,1,0},{0,1,0}},
					 	  {{0,0,0},{0,0,0},{1,1,1},{1,1,1}}};


vector<BitSet<unsigned long long>> bitsetMasks;
vector<BitSet<unsigned long long>> results;

void f(BitSet &mask, BitSet indexes, unsigned int start)
{
	for (unsigned int i = start; i < size; i++) {
		if ((mask & bitsetMasks[i]).isAllFalse()) {
			BitSet temp(mask);
			temp |= bitsetMasks[i];
			
			if (temp.isAllTrue()) {
				indexes.set(i, true);
				results.push_back(indexes);
				return;
			}
			
			BitSet tempIndexes(indexes);
			tempIndexes.set(i, true);
			f(temp, tempIndexes, i);
		}
	}
}


void ffff(unsigned int x0, unsigned int y0)
{
	for (unsigned int i = 0; i < size; i++) {
		if (masks[i][x0][y0]) {
			BitSet<unsigned long long> indexes(size);
			indexes.set(i, true);
			f(bitsetMasks[i], indexes, 0);
		}
	}
	cout << "\nAnswers: \n";
	for (unsigned int i = 0; i < results.size(); i++) {
		for (unsigned int j = 0; j < size; j++) {
			if (results[i][j]) {
				cout << setw(3) << j;
			}
		}
		cout << endl;
	}
}




int main()
{
	unsigned int min = 0, xMin = 0, yMin = 0;
	min = ~min;
	for (unsigned int i = 0; i < n; i++) {
		for (unsigned int j = 0; j < m; j++) {
			unsigned int s = 0;
			for (unsigned int k = 0; k < size; k++) {
				s += masks[k][i][j];
			}
			if (s < min) {
				min = s;
				xMin = i;
				yMin = j;
			}
			cout << setw(3) << s;
		}
		cout << endl;
	}
	
	for (unsigned int k = 0; k < size; k++) {
		bool** mask = new bool*[n];
		for (unsigned int i = 0; i < n; i++) {
			mask[i] = new bool[m];
			for (unsigned int j = 0; j < m; j++) {
				mask[i][j] = masks[k][i][j];
			}
		}
		
		bitsetMasks.push_back(BitSet<unsigned long long>(nm, mask, n, m));
		
		for (unsigned int i = 0; i < n; i++) {
			delete[] mask[i];
		}
		delete[] mask;
	}
	
	
	cout << endl << xMin << "\t" << yMin << endl << endl;
	
	
	Timer timer;
	
	ffff(xMin, yMin);
	
	unsigned long long calculationTimeInNanoseconds = timer.elapsedNanoseconds();
	cout << "\nNanoseconds:   " << calculationTimeInNanoseconds << endl << endl;
	cout << "Microseconds:  " << static_cast<double>(calculationTimeInNanoseconds / 1000.0) << endl << endl;
	cout << "Milliseconds:  " << static_cast<double>(calculationTimeInNanoseconds / 1000000.0) << endl << endl;
	cout << "(" << string(1, ' ') << ")\n";

	return 0;
} 
