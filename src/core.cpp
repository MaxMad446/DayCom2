// Auto-generated module | 2026-05-14T06:13:04.713092
#include <iostream>
#include <vector>

int compute_412() {
    int base = 213;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
