#include <iostream>
using namespace std;

int main() {
    for(int i=1; i<5; i++) {
        cout << "continue 문장 젂에 있는 문장" << endl;
        continue;
        cout << "continue 문장 이후에 있는 문장" << endl;
    }
    
    return 0;
}
