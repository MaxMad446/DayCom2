// Auto-generated module | 2026-05-11T19:54:24.038238
#include <iostream>
#include <vector>

int compute_613() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_613() << std::endl;
    return 0;
}
