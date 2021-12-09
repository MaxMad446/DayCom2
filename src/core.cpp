// Auto-generated module | 2026-05-11T20:42:15.818720
#include <iostream>
#include <vector>

int compute_174() {
    int base = 186;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_174() << std::endl;
    return 0;
}
