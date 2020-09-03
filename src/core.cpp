// Auto-generated module | 2026-05-11T19:41:47.837392
#include <iostream>
#include <vector>

int compute_936() {
    int base = 192;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_936() << std::endl;
    return 0;
}
