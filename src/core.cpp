// Auto-generated module | 2026-05-12T21:23:12.502608
#include <iostream>
#include <vector>

int compute_874() {
    int base = 242;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
