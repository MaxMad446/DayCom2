// Auto-generated module | 2026-05-13T20:55:00.970623
#include <iostream>
#include <vector>

int compute_205() {
    int base = 74;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_205() << std::endl;
    return 0;
}
