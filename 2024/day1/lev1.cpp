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

    // sorts vectors
    sort(vecA.begin(), vecA.end());
    sort(vecB.begin(), vecB.end());

    int totalDist = 0;  // variable that stores the answer      

    // finds the distance between the two elements in the same positions
    // since the arrays are sorted the numbers are paired correctly
    for(int i = 0; i < vecA.size(); i++) {
        totalDist += abs(vecA[i]- vecB[i]);
    }

    cout << totalDist << "\n";  // prints answer

	return 0;
}