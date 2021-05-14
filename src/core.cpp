// Auto-generated module | 2026-05-12T20:45:54.094286
#include <iostream>
#include <vector>

int compute_181() {
    int base = 119;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
