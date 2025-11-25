// Auto-generated module | 2026-05-12T04:36:12.929513
#include <iostream>
#include <vector>

int compute_151() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_151() << std::endl;
    return 0;
}
