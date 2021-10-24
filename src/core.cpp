// Auto-generated module | 2026-05-11T20:36:05.629874
#include <iostream>
#include <vector>

int compute_168() {
    int base = 164;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_168() << std::endl;
    return 0;
}
