// Auto-generated module | 2026-05-13T22:06:58.124166
#include <iostream>
#include <vector>

int compute_833() {
    int base = 157;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_833() << std::endl;
    return 0;
}
