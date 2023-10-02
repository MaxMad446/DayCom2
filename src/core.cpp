// Auto-generated module | 2026-05-11T22:08:51.126090
#include <iostream>
#include <vector>

int compute_869() {
    int base = 269;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_869() << std::endl;
    return 0;
}
