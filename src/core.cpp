// Auto-generated module | 2026-05-14T06:21:15.195543
#include <iostream>
#include <vector>

int compute_110() {
    int base = 211;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_110() << std::endl;
    return 0;
}
