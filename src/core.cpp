// Auto-generated module | 2026-05-12T21:27:39.466632
#include <iostream>
#include <vector>

int compute_605() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_605() << std::endl;
    return 0;
}
