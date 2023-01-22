#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string keys = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int len = keys.size();
    string combination;
    ofstream file("combinations.txt");
    if (file.is_open()) {
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                for (int k = 0; k < len; k++) {
                    for (int l = 0; l < len; l++) {
                        for (int m = 0; m < len; m++) {
                            for (int n = 0; n < len; n++) {
                                for (int o = 0; o < len; o++) {
                                    for (int p = 0; p < len; p++) {
                                        combination = keys[i] + keys[j] + keys[k] + keys[l] + keys[m] + keys[n] + keys[o] + keys[p];
                                        file << combination << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        file.close();
    }
    else cout << "Unable to open file";
    return 0;
}
