// Auto-generated module | 2026-05-11T22:51:55.739912
#include <iostream>
#include <vector>

int compute_383() {
    int base = 202;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_383() << std::endl;
    return 0;
}
