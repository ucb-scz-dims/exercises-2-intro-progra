
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
 for (int i = 1; i < n; ++i) {
  cout << "   ";
 }for(int i = 1; i<= k ; ++i){
  if(i < 10){
    cout << " ";
  }
  cout << i;

  int new_line = ( i + n -1) % 7;
  if(new_line == 0){
    cout << endl;
  } else if( i == k){
    cout << " " << endl;
  } else {
    cout << " ";
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
     double u_0 = 1.0; 
    double u_n = u_0; 
    cout << "U0 = " << u_0 << endl;
    for (int i = 1; i <= 10; ++i) { 
        u_n /= i; 
        cout << "U" << i << " = " << u_n << endl;
    }
}

void exercise_12() {
  // TODO: YOUR CODE HERE
  double u_0 = 1.0;
  double u_n = u_0;
  double v_n = u_0;

  cout << "U0 = " << u_0 <<  " V0 = " << v_n << endl;

  for (int i = 1; i <= 10; ++i) {
    u_n /= i;
    v_n += u_n; 
    cout << "U" << i << " = " << u_n << " V" << i << " = " << "1" << endl;
  }
}

long exercise_13(int n, int k) {
  // TODO: YOUR CODE HERE
  int x = 0;
  for (int i = 1; i <= n; ++i) {
        int result = 1;
        for (int j = 0; j < k; ++j) {
            result *= i;
        }
        x += result;
    }
  return x;
 
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
  string bin = ""; 
  if(decimal == 0){
    bin = to_string(decimal);
  }
  while (decimal > 0) {
  int r = decimal % 2; 
  bin = to_string(r) + bin; 

  decimal /= 2; 
    }
    cout << bin << endl;
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
  for (int i = debut; i <= fin; i++) {
    if ( debut == 1 && fin == 1){
        cout << debut << "->" << fin << endl;
        break;
    }
    if ( debut > fin) {
    cout << "El numero de fin no debe de ser menor al inicial" << endl;
    break;
  } if (debut <= 0) {
    cout << "El numero debe de ser positivo y mayor a zero" << endl;
    break;
  }
    int count = 0;
    int x = i; // Variable temporal para almacenar el valor de n
    while (x > 0) {
    if (x % 3 == 0) {
    x += 4;
    } else if (x % 4 == 0) {
    x /= 2;
    } else {
   x--;
    }
    count++;
    }
    cout << i << "->" << count << endl;
  }
}