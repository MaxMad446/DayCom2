// Auto-generated module | 2026-05-11T19:43:57.650108
#include <iostream>
#include <vector>

int compute_546() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_546() << std::endl;
    return 0;
}
