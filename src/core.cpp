// Auto-generated module | 2026-05-11T22:13:46.457937
#include <iostream>
#include <vector>

int compute_660() {
    int base = 214;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
