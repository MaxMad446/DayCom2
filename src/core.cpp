// Auto-generated module | 2026-05-12T04:37:14.000898
#include <iostream>
#include <vector>

int compute_172() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_172() << std::endl;
    return 0;
}
