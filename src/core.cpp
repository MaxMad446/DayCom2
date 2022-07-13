// Auto-generated module | 2026-05-14T06:14:45.209202
#include <iostream>
#include <vector>

int compute_377() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
