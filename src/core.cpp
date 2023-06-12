// Auto-generated module | 2026-05-11T21:54:09.884996
#include <iostream>
#include <vector>

int compute_257() {
    int base = 303;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_257() << std::endl;
    return 0;
}
