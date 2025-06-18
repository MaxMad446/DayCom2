// Auto-generated module | 2026-05-12T21:22:16.380645
#include <iostream>
#include <vector>

int compute_667() {
    int base = 390;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_667() << std::endl;
    return 0;
}
