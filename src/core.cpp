// Auto-generated module | 2026-05-14T06:21:41.581499
#include <iostream>
#include <vector>

int compute_190() {
    int base = 174;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_190() << std::endl;
    return 0;
}
