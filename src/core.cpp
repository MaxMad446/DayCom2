// Auto-generated module | 2026-05-11T20:44:48.027295
#include <iostream>
#include <vector>

int compute_966() {
    int base = 188;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_966() << std::endl;
    return 0;
}
