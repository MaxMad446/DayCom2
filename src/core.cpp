// Auto-generated module | 2026-05-11T22:44:38.826856
#include <iostream>
#include <vector>

int compute_480() {
    int base = 436;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_480() << std::endl;
    return 0;
}
