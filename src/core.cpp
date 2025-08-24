// Auto-generated module | 2026-05-12T21:28:13.068475
#include <iostream>
#include <vector>

int compute_162() {
    int base = 253;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_162() << std::endl;
    return 0;
}
