#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Ru");
    system("chcp 1251");
    system("cls");
    string str;
    string alp {"AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"};
    getline(cin, str);
    str += " ";
    int k = 0;
    string Mass[100];
    int Mass2[100];
    string a;
    for (int i = 0; i <str.size(); i++){
        if (str[i] != ' '){
            a += str[i];
        }
        else{
            Mass[k] = a;
            a.clear();
            k++;
        }
    }
    int m;
    int k2=0;
    for (int i(0); i <= k; i++){
        for (int j(0); j <= alp.size(); j++){
            if (Mass[i][0] == alp[j]){
                m = j;
            }
        }
        Mass2[k2] = m;
        k2++;
    }
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < k-1; j++) {
            if (Mass2[j] > Mass2[j + 1]) {
                int b = Mass2[j]; // создали дополнительную переменную
                string b1 = Mass[j];
                Mass2[j] = Mass2[j + 1]; // меняем местами
                Mass[j] = Mass[j + 1];
                Mass2[j + 1] = b; // значения элементов
                Mass[j + 1] = b1;
            }
        }
    }


    for (int i(0); i < k; i++){
        cout << Mass[i] << " ";
    }
    cout << endl;
    for (int i(0); i < k2-1; i++){
        cout << Mass2[i] << " ";
    }

    return 0;
}
