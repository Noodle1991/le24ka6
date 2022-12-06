#include <iostream>

int main() {
    /*std::string stroka[] = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "0", "A", "a", "B", "b", "C", "c", "D", "d",
                            "E",
                            "e", "F", "f", "G", "g", "H", "h", "X", "x", "Y", "y", "Z", "z"};*/
    std::string stroka = {"1234567890AaBbCcDdEeFfGgHhXxYyZz"};
    /*int i, g, f, l, k;*/
    for (int i = 0; i < stroka.length(); i++) {
        for (int g = 0; g < stroka.length(); g++) {
            for (int f = 0; f < stroka.length(); f++) {
                for (int l = 0; l < stroka.length(); l++) {
                    for (int k = 0; k < stroka.length(); k++) {
                        std::cout << stroka[i] << stroka[g] << stroka[f] << stroka[l] << stroka[k] << std::endl;
                    }
                }
            }
        }
    }
    return 0;
}
