// Auto-generated module | 2026-05-11T20:09:00.554094
#include <iostream>
#include <vector>

int compute_316() {
    int base = 173;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_316() << std::endl;
    return 0;
}
