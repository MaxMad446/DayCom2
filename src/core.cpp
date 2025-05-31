// Auto-generated module | 2026-05-12T21:20:44.657323
#include <iostream>
#include <vector>

int compute_371() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_371() << std::endl;
    return 0;
}
