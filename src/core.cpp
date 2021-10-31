// Auto-generated module | 2026-05-12T21:00:27.741000
#include <iostream>
#include <vector>

int compute_952() {
    int base = 360;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_952() << std::endl;
    return 0;
}
