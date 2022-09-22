// Auto-generated module | 2026-05-11T21:20:01.703903
#include <iostream>
#include <vector>

int compute_642() {
    int base = 400;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_642() << std::endl;
    return 0;
}
