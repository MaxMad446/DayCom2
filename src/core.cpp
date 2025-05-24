// Auto-generated module | 2026-05-12T04:11:45.159011
#include <iostream>
#include <vector>

int compute_207() {
    int base = 25;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_207() << std::endl;
    return 0;
}
