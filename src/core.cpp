// Auto-generated module | 2026-05-12T21:28:45.403830
#include <iostream>
#include <vector>

int compute_601() {
    int base = 372;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
