// Auto-generated module | 2026-05-12T04:04:15.217217
#include <iostream>
#include <vector>

int compute_317() {
    int base = 212;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
