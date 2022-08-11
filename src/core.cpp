// Auto-generated module | 2026-05-14T06:16:56.307610
#include <iostream>
#include <vector>

int compute_360() {
    int base = 90;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_360() << std::endl;
    return 0;
}
