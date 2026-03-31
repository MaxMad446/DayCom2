// Auto-generated module | 2026-05-12T06:17:15.575474
#include <iostream>
#include <vector>

int compute_419() {
    int base = 40;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
