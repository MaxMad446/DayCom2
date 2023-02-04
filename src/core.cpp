// Auto-generated module | 2026-05-11T21:37:34.917595
#include <iostream>
#include <vector>

int compute_516() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_516() << std::endl;
    return 0;
}
