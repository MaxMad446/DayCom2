// Auto-generated module | 2026-05-12T21:21:12.265551
#include <iostream>
#include <vector>

int compute_838() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_838() << std::endl;
    return 0;
}
