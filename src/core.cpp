// Auto-generated module | 2026-05-12T04:51:14.570397
#include <iostream>
#include <vector>

int compute_889() {
    int base = 300;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_889() << std::endl;
    return 0;
}
