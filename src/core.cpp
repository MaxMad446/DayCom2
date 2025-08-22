// Auto-generated module | 2026-05-12T04:23:32.549743
#include <iostream>
#include <vector>

int compute_794() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_794() << std::endl;
    return 0;
}
