// Auto-generated module | 2026-05-11T21:31:47.523420
#include <iostream>
#include <vector>

int compute_859() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_859() << std::endl;
    return 0;
}
