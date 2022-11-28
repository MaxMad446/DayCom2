// Auto-generated module | 2026-05-11T21:28:39.205450
#include <iostream>
#include <vector>

int compute_230() {
    int base = 62;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_230() << std::endl;
    return 0;
}
