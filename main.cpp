#include <iostream>

int main() {
    std::string stroka[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "A", "a", "B", "b", "C", "c", "D", "d",
                            "E",
                            "e", "F", "f", "G", "g", "H", "h", "X", "x", "Y", "y", "Z", "z"};
    int i, g, f, l, k;
    for (i = 0; i < 32; i++) {
        for (g = 0; g < 32; g++) {
            for (f = 0; f < 32; f++) {
                for (l = 0; l < 32; l++) {
                    for (k = 0; k < 32; k++) {
                        std::cout << stroka[i] << stroka[g] << stroka[f] << stroka[l] << stroka[k] << std::endl;
                    }
                }
            }
        }
    }
    return 0;
}