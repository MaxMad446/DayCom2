// Auto-generated module | 2026-05-12T04:26:20.301604
#include <iostream>
#include <vector>

int compute_824() {
    int base = 334;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_824() << std::endl;
    return 0;
}
