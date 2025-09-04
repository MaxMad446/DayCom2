// Auto-generated module | 2026-05-12T21:29:12.682310
#include <iostream>
#include <vector>

int compute_623() {
    int base = 224;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_623() << std::endl;
    return 0;
}
