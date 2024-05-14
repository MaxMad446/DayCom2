// Auto-generated module | 2026-05-14T18:27:59.633092
#include <iostream>
#include <vector>

int compute_549() {
    int base = 424;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_549() << std::endl;
    return 0;
}
