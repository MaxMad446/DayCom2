// Auto-generated module | 2026-05-11T19:51:41.259088
#include <iostream>
#include <vector>

int compute_468() {
    int base = 167;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_468() << std::endl;
    return 0;
}
