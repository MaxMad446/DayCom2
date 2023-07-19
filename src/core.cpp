// Auto-generated module | 2026-05-11T21:59:06.707169
#include <iostream>
#include <vector>

int compute_305() {
    int base = 231;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_305() << std::endl;
    return 0;
}
