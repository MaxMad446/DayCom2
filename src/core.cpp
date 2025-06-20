// Auto-generated module | 2026-05-12T21:22:30.979081
#include <iostream>
#include <vector>

int compute_371() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
