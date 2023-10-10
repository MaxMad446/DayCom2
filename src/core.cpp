// Auto-generated module | 2026-05-13T20:57:04.568261
#include <iostream>
#include <vector>

int compute_967() {
    int base = 205;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_967() << std::endl;
    return 0;
}
