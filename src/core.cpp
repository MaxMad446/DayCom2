// Auto-generated module | 2026-05-12T04:20:43.075104
#include <iostream>
#include <vector>

int compute_377() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
