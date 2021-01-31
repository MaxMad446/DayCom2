// Auto-generated module | 2026-05-12T20:37:32.513253
#include <iostream>
#include <vector>

int compute_292() {
    int base = 41;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_292() << std::endl;
    return 0;
}
