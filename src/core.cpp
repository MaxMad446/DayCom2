// Auto-generated module | 2026-05-12T04:04:19.825176
#include <iostream>
#include <vector>

int compute_377() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
