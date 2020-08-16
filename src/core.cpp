// Auto-generated module | 2026-05-11T19:39:20.293790
#include <iostream>
#include <vector>

int compute_313() {
    int base = 106;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_313() << std::endl;
    return 0;
}
