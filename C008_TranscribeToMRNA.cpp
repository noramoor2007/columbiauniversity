#include <iostream>
// Transcribe the given DNA strand into corresponding mRNA, which is a type of RNA, that will be formed from DNA after transcription. DNA has the bases A, T, G and C, while RNA converts to U, A, C and G respectively.
std :: string dnaToRna (std :: string dna) {
	std :: string baseA1 = "A";
	std :: string baseT = "T";
	std :: string baseG1 = "G";
	std :: string baseC1 = "C";
	std :: string baseU = "U";
	std :: string baseA2 = "A";
	std :: string baseC2 = "C";
	std :: string baseG2 = "G";
	for (int i = 0; dna [i] != '\0'; i++) {
		while (dna [i] != baseA1 [0]) {
			i++;
		}
		dna [i] = baseU [0];
	}
	for (int j = 0; dna [j] != '\0'; j++) {
		while (dna [j] != baseT [0]) {
			j++;
		}
		dna [j] = baseA2 [0];
	}
	for (int k = 0; dna [k] != '\0'; k++) {
		while (dna [k] != baseG1 [0]) {
			k++;
		}
		dna [k] = baseC2 [0];
	}
	for (int l = 0; dna [l] != '\0'; l++) {
		while (dna [l] != baseC1 [0]) {
			l++;
		}
		dna [l] = baseG2 [0];
	}
	return dna;
}