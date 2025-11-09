// Auto-generated module | 2026-05-12T04:34:10.990865
#include <iostream>
#include <vector>

int compute_377() {
    int base = 12;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
