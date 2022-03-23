// Auto-generated module | 2026-05-11T20:55:43.892742
#include <iostream>
#include <vector>

int compute_211() {
    int base = 335;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_211() << std::endl;
    return 0;
}
