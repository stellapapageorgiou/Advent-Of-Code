#include <bits/stdc++.h> // include all data structures and algorithms of the STL library
using namespace std;     // to avoid writing std:: before EVERY stl method or data structure we use


// Main function, exactly like in C
int main() {
	
    vector<int> vecA;
    vector<int> vecB;

    for(int i = 0; i < 1000; i++) {
        int a, b;
        cin >> a;
        cin >> b;
        vecA.push_back(a);
        vecB.push_back(b);
    }


    // sort(vecA.begin(), vecA.end());
    // sort(vecB.begin(), vecB.end());

    int similarityScore = 0;
    for(int i = 0; i < vecA.size(); i++) {
        int a = vecA[i];
        int similarity = 0;
        for(int j = 0; j < vecB.size(); j++) {
            if(a == vecB[j]) {
                similarity++;
            }
        }
        similarityScore += a * similarity;
    }

    cout << similarityScore << "\n";

	return 0;
}