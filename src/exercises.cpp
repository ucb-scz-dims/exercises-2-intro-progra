
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
                cout << "No cake :(" << endl;
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
  int day_one = 1;

 for (int i = 1; i <= 6; ++i) {
     if (i == 1) {
   for (int i = 1; i < n; ++i) {
   cout << "   ";
        }
   for (int o = n; o <= 7; ++o) {
      if (day_one < 10) {
          cout << " ";
         }
        cout << day_one++;
          cout << " ";
        if (day_one > k) {
            break;
          }
         }
        cout << endl;
        } else {
   for (int i = 1; i <= 7; ++i) {
         if (day_one < 10) {
         cout << " ";
       }
          cout << day_one++;
          cout << " ";
           if (day_one > k) {
           break;
           }
         }
       cout << endl;
        }
        if (day_one > k) {
            break;
        }
    }
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
  double sum = 0;
  for (int i = 1; i <= n; i++) {
    switch (i % 2) {
   case 0:
    sum -= 1.0 / i;
     break;
    case 1:
    sum += 1.0 / i;
    break;
    }
  }

    cout << sum << endl;
}

void exercise_8(string s) {
  // TODO: YOUR CODE HERE}
  string s_char = "";
  string vacia = "";
  if( s == vacia){
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
    }

void exercise_9(string s) {
  // TODO: YOUR CODE HERE
      int n = -2;
    for(int i = 0; i < s.size(); ++i){
        char c = s[i];
        switch (c)
        {
        case 'f':
            n += 1;
            break;
        default:
            break;
        }
    } 
    for (int i = 0; i < s.size(); ++i){
        if(s[i] == s[i +1]){
            n += 3;
        }
    } cout << n << endl;
}

int exercise_10(int a, int b) {
  while( b != 0){
        int result = b;
        b = a % b;
        a = result;
    }
    return a;
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
    string n2 = to_string(n);
  string inverse;

  for(int i = 1; i <= n2.size() ; ++i){
    inverse += n2[n2.size()-i];
  }
  if( inverse == n2){
    return "Es palindrome";
  } else{
    return "No es palindrome";
  }
}

void exercise_15(int decimal) {
  // TODO: YOUR CODE HERE
}

void exercise_16(int divident, int divider) {
  // TODO: YOUR CODE HERE
  int i;
  if(divident < divider){
    i = 0;
    cout << i << " " << divident << endl;
  }
  if(divider > 0 && divident >= divider){
    for(i = 0; divident != 0 && divident != 1; ++i){
    divident -= divider;
  }
    cout << i << " " << divident << endl;
  }
}

void exercise_17(int n) {
  // TODO: YOUR CODE HERE
  int count = 0;
  int num = 2;
  while (count < n) {
    bool prim = true;
    for (int divisor = 2; divisor * divisor <= num; divisor++) {
    if (num % divisor == 0) {
    prim = false;
     break;
    }
    }
    if (prim) {
     cout << num << " ";
   count++;
    }
   num++;
  }
}

void exercise_18_19(int debut, int fin) {
  // TODO: YOUR CODE HERE
}