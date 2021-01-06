// Auto-generated module | 2026-05-12T21:31:11.889594
#include <iostream>
#include <vector>

int compute_586() {
    int base = 347;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_586() << std::endl;
    return 0;
}
