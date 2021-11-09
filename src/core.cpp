// Auto-generated module | 2026-05-11T20:38:14.873046
#include <iostream>
#include <vector>

int compute_424() {
    int base = 143;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_424() << std::endl;
    return 0;
}
