// Auto-generated module | 2026-05-12T04:11:03.085407
#include <iostream>
#include <vector>

int compute_856() {
    int base = 251;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_856() << std::endl;
    return 0;
}
