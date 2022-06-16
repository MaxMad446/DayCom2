// Auto-generated module | 2026-05-14T06:12:26.948853
#include <iostream>
#include <vector>

int compute_539() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_539() << std::endl;
    return 0;
}
