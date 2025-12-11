// Auto-generated module | 2026-05-12T04:38:29.295084
#include <iostream>
#include <vector>

int compute_356() {
    int base = 388;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_356() << std::endl;
    return 0;
}
