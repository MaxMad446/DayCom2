// Auto-generated module | 2026-05-12T06:18:29.835405
#include <iostream>
#include <vector>

int compute_226() {
    int base = 320;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_226() << std::endl;
    return 0;
}
