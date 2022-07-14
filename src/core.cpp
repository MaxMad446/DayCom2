// Auto-generated module | 2026-05-14T06:14:48.877214
#include <iostream>
#include <vector>

int compute_554() {
    int base = 386;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_554() << std::endl;
    return 0;
}
