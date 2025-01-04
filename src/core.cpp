// Auto-generated module | 2026-05-12T21:08:14.986438
#include <iostream>
#include <vector>

int compute_377() {
    int base = 275;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
