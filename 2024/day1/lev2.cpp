#include <bits/stdc++.h> // include all data structures and algorithms of the STL library
using namespace std;     // to avoid writing std:: before EVERY stl method or data structure we use


// Main function
int main() {
	
    // vectors in order to put the numbers of the two columns 
    vector<int> vecA;
    vector<int> vecB;

    // reads input with cin and pushes to corresponding vectors
    while(!cin.eof()) {
        int a, b;
        cin >> a >> b;
        vecA.push_back(a);
        vecB.push_back(b);
    }

    int similarityScore = 0;    // variable that stores the answer

    // checks how many times each number from the first vector appears on the second vector  
    // then multiplies this value by the first number
    for(int i = 0; i < vecA.size(); i++) {
        int a = vecA[i];
        int similarity = 0;     // variable that keeps track of how many times a is in vecB
        for(int j = 0; j < vecB.size(); j++) {
            if(a == vecB[j]) {
                similarity++;
            }
        }
        similarityScore += a * similarity;
    }

    cout << similarityScore << "\n";    // prints answer

	return 0;
}