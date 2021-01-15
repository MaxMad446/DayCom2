// Auto-generated module | 2026-05-14T18:14:15.877128
#include <iostream>
#include <vector>

int compute_492() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_492() << std::endl;
    return 0;
}
