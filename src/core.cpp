// Auto-generated module | 2026-05-12T04:12:03.152523
#include <iostream>
#include <vector>

int compute_936() {
    int base = 232;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
