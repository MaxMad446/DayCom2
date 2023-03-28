// Auto-generated module | 2026-05-11T21:44:16.477429
#include <iostream>
#include <vector>

int compute_494() {
    int base = 194;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
