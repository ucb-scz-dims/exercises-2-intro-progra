
#include <cmath>
#include <iostream>

using namespace std;

void exercise_1(string s1) {
  // TODO: YOUR CODE HERE
    int n_s1 = s1.size();
    for (int i=0; i<n_s1; ++i){
        if(s1[i]==' '){
            cout << i << endl;
        }
    }
   cout << n_s1 <<endl;
}

void exercise_2(string s1) {
  // TODO: YOUR CODE HERE
  string sum_words;
    for(int i = 0; i < s1.size(); ++i ) {
        if (s1[i] != ' ' ) {
            sum_words = "";
            while (s1[i] != ' ' && i < s1.size()) {
                sum_words += s1[i];
                ++i;
            }
            cout << "[" << sum_words << "]" << endl;
        }
    }
}

void exercise_3(string s1) {
  // TODO: YOUR CODE HERE
  for (int n_visits = 0; n_visits < 10; ++n_visits) {
      int n_s1 = stoi(s1);
      if (n_s1 == 1) {
         cout << "Om-nom-nom :P" << endl;
     } else if (n_s1 == 0) {
          cout << "No cake :(" << endl;
       break;
     } else {
          cout << s1 << endl;
     }
  }
}

void exercise_4(int n) {
  // TODO: YOUR CODE HERE
   if (n < 0) {
     cout << "El numero es negativo. Intentelo de nuevo" << endl;
    } else if (n > 12) {
      cout << "El numero es muy grande. Intentelo de nuevo" << endl;
    } else {
      int factorial = 1;
     for (int i = 1; i <= n; ++i) {
       factorial *= i;
    }
      cout << factorial << endl;
    }
}

void exercise_5(int n, int k) {
  // TODO: YOUR CODE HERE
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
  while (n != 0) {
        sum += n; 
        cout << sum; 
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  return 0;
}

void exercise_11() {
  // TODO: YOUR CODE HERE
}

void exercise_12() {
  // TODO: YOUR CODE HERE
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  return 0;
}

string exercise_14(int n) {
  // TODO: YOUR CODE HERE
  return "";
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}