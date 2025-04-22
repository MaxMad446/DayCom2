// Auto-generated module | 2026-05-12T04:07:28.456624
#include <iostream>
#include <vector>

int compute_383() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_383() << std::endl;
    return 0;
}
