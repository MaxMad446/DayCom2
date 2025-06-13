// Auto-generated module | 2026-05-12T04:14:15.384708
#include <iostream>
#include <vector>

int compute_949() {
    int base = 55;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_949() << std::endl;
    return 0;
}
