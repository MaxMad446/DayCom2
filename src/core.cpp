// Auto-generated module | 2026-05-14T18:06:16.000744
#include <iostream>
#include <vector>

int compute_300() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_300() << std::endl;
    return 0;
}
