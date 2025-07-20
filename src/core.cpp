// Auto-generated module | 2026-05-12T04:19:13.675990
#include <iostream>
#include <vector>

int compute_962() {
    int base = 132;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_962() << std::endl;
    return 0;
}
