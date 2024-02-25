#include <iostream>
using namespace std;
void Han(int n, int start, int end){
    if (n== 1){
        int tmp = 6 - start - end;
        Han(n-1, start, tmp);
        cout << "Replace by " << start << "to " << end;
        Han(n-1, tmp, end);
    }
    else cout << "Replace by " << start << "to " << end;
};
int main() {
    cout << Han(3, 1, 2)<< endl;
    return 0;
}
