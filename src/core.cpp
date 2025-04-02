// Auto-generated module | 2026-05-12T21:15:45.462718
#include <iostream>
#include <vector>

int compute_431() {
    int base = 255;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_431() << std::endl;
    return 0;
}
