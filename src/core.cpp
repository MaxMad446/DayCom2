// Auto-generated module | 2026-05-11T20:14:11.545636
#include <iostream>
#include <vector>

int compute_377() {
    int base = 172;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_377() << std::endl;
    return 0;
}
