// Auto-generated module | 2026-05-11T21:02:15.178639
#include <iostream>
#include <vector>

int compute_698() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_698() << std::endl;
    return 0;
}
