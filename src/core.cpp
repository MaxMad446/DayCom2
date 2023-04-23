// Auto-generated module | 2026-05-11T21:47:21.949916
#include <iostream>
#include <vector>

int compute_656() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_656() << std::endl;
    return 0;
}
