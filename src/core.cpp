// Auto-generated module | 2026-05-11T22:34:45.254580
#include <iostream>
#include <vector>

int compute_412() {
    int base = 381;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
