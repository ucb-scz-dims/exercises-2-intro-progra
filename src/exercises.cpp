
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
    string s1_char = "";
    for (int i = 0; i < s1.size(); ++i) {
        if (s1[i] != ' '){
            s1_char += s1[i]; 
        } 
  } 
  for (int i = 0; i <= 9 ; ++i){
            if (s1_char[i] == '1'){
                cout << "Om-nom-nom :P" << endl;
            } else if (s1_char[i] == '0'){
                cout << "No cake :(\n" << endl;
                break;
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
  //int i;
  //  if ( n != 0 || n < 7 && k < 99 || k != 0){
  //      for(int o = 1; o < n; ++o){
  //          string space;
  //          space += " ";
  //          cout << " " << space << " ";
  //          }
  //      for ( int i = 1; i <= k; ++i){
  //          cout << " " << i << " ";
  //      }
  //  }
    
    //return i;
}

int exercise_6(int n) {
  // TODO: YOUR CODE HERE
   int sum = 0;
    while (n > 0) {
        sum += n % 10; 
        n /= 10;
    }
    cout << sum << endl;
    return sum;
}

void exercise_7(int n) {
  // TODO: YOUR CODE HERE
}

void exercise_8(string s) {
  string s_char = "";
  if( s_char == ""){
        cout << "YES" << endl;
    }
    for(int i = 0; i < s.size(); ++i){
        if(s[i] != ' '){
            s_char += s[i];
        }
    } 
    for (int i = 0 ; i < s_char.size(); ++i){
        if(s_char[i] == s_char[s_char.size() - 1] ){
            cout << "YES" << endl;
            break;
        } else {
            cout << "NO" << endl;
            break;
        }
    }
  // TODO: YOUR CODE HERE
}

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
}

int exercise_10(int a, int b) {
  // TODO: YOUR CODE HERE
  //while (b != 0) {
  //      result =
  //}
  //  cout << result;
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