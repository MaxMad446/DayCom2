// Auto-generated module | 2026-05-11T21:55:18.955033
#include <iostream>
#include <vector>

int compute_226() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
