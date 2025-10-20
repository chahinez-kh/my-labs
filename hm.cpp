/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
using namespace std;

string isValid(std:: string s) {
   std :: unordered_map<char, int> freq;
    
    for (char c : s) {
        freq[c]++;
    }
 
 map<int, int> freqCount; 
      for (auto& entry : freq) {
    freqCount[entry.second]++;
  }

    if (freqCount.size() == 1) {
    } else if (freqCount.size() == 2) {
        auto it = freqCount.begin();
        int freq1 = it->first;
        int count1 = it->second;
        ++it;
        int freq2 = it->first;
        int count2 = it->second;

        if ((freq1 == 1 && count1 == 1) || (freq2 == 1 && count2 == 1)) {
            return "YES";
        }
        if ((abs(freq1 - freq2) == 1) && ((count1 == 1 && freq1 > freq2) || (count2 == 1 && freq2 > freq1))) {
            return "YES";
        }
    }

    return "NO";
}

int main() {
    string s;
    
    cout << "Enter sherlock:  ";
    cin >> s;

    cout << isValid(s) << endl;

    return 0;
}
