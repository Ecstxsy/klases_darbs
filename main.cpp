//
// Created by Krists on 1/25/2022.
//

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream teksta_fails;

    teksta_fails.open("teksts.txt");
    if (!teksta_fails) {
        cout << "Fails nav atrasts.";
        exit(1);
    }

    teksta_fails.close();
}

