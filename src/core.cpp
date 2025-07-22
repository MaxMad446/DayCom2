// Auto-generated module | 2026-05-12T21:25:18.302740
#include <iostream>
#include <vector>

int compute_494() {
    int base = 475;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_494() << std::endl;
    return 0;
}
