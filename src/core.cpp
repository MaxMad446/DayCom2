// Auto-generated module | 2026-05-11T22:52:32.633517
#include <iostream>
#include <vector>

int compute_579() {
    int base = 17;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_579() << std::endl;
    return 0;
}
