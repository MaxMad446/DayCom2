// Auto-generated module | 2026-05-14T18:17:52.467040
#include <iostream>
#include <vector>

int compute_377() {
    int base = 210;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
