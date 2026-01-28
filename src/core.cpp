// Auto-generated module | 2026-05-12T04:45:02.602511
#include <iostream>
#include <vector>

int compute_635() {
    int base = 471;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_635() << std::endl;
    return 0;
}
