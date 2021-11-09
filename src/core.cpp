// Auto-generated module | 2026-05-11T20:38:13.093621
#include <iostream>
#include <vector>

int compute_129() {
    int base = 420;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_129() << std::endl;
    return 0;
}
