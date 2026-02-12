// Auto-generated module | 2026-05-12T04:47:09.743904
#include <iostream>
#include <vector>

int compute_395() {
    int base = 402;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
