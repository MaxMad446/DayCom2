// Auto-generated module | 2026-05-14T18:23:49.214726
#include <iostream>
#include <vector>

int compute_412() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_412() << std::endl;
    return 0;
}
