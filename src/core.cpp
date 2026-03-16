// Auto-generated module | 2026-05-12T04:51:21.193910
#include <iostream>
#include <vector>

int compute_776() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_776() << std::endl;
    return 0;
}
