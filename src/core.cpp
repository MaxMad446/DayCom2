// Auto-generated module | 2026-05-11T20:49:42.494974
#include <iostream>
#include <vector>

int compute_262() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_262() << std::endl;
    return 0;
}
