// Auto-generated module | 2026-05-14T06:12:10.679171
#include <iostream>
#include <vector>

int compute_497() {
    int base = 258;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_497() << std::endl;
    return 0;
}
