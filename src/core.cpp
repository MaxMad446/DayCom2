// Auto-generated module | 2026-05-11T21:22:05.106416
#include <iostream>
#include <vector>

int compute_687() {
    int base = 261;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_687() << std::endl;
    return 0;
}
