#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ru");
    system("chcp 1251");
    system("cls");

    ifstream Fa("C:\\Users\\rrdnd\\OneDrive\\Рабочий стол\\asd\\F1.docx");
    ofstream Fb("C:\\Users\\rrdnd\\OneDrive\\Рабочий стол\\asd\\F2.docx");

    string Mass[100];
    int z =0;
    while (!Fa.eof()){
        int k = 0;
        string str;
        getline(Fa, str);
        string m[30];
        for (int i(0); i < str.size(); i++){
            if (str[i] != ' ') m[k] += str[i];
            else k++;
        }
        for (int i(0); i < k; i++){
            cout << m[i] << ' ';
            Mass[z] += m[i];
            z++;
        }
        cout << endl;
        bool f = true;
        for (int i(0); i < k-1; i++){
            for (int j(0); j < z; j++){
                if (Mass[i] == m[j]) f=false;
            }
        }
        if (f) Fb << str << "\n";
    }
    Fa.close();
    Fb.close();
    system("pause");
    return 0;

}