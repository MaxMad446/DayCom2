// Auto-generated module | 2026-05-12T21:27:57.962377
#include <iostream>
#include <vector>

int compute_145() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_145() << std::endl;
    return 0;
}
