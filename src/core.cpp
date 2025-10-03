// Auto-generated module | 2026-05-12T04:29:15.002505
#include <iostream>
#include <vector>

int compute_331() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_331() << std::endl;
    return 0;
}
