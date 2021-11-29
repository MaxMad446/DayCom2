// Auto-generated module | 2026-05-12T21:03:01.828596
#include <iostream>
#include <vector>

int compute_184() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_184() << std::endl;
    return 0;
}
