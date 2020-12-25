// Auto-generated module | 2026-05-11T19:56:38.539319
#include <iostream>
#include <vector>

int compute_231() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_231() << std::endl;
    return 0;
}
