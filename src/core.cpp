// Auto-generated module | 2026-05-11T20:46:14.876371
#include <iostream>
#include <vector>

int compute_297() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_297() << std::endl;
    return 0;
}
