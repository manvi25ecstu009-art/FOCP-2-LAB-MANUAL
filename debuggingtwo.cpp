#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 2, 3, 1};
    bool checked[5] = {false};
    for(int i = 0; i < 5; i++) {
        if(checked[i] == true)
            continue;
        int count = 0;
        for(int j = 0; j < 5; j++) {
            if(arr[i] == arr[j]) {
                count++;
                checked[j] = true;
            }
        }
        cout << arr[i] << " occurs " << count << " times\n";
    }
    return 0;
}
