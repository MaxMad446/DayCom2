// Auto-generated module | 2026-05-11T21:49:57.891870
#include <iostream>
#include <vector>

int compute_203() {
    int base = 280;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_203() << std::endl;
    return 0;
}
