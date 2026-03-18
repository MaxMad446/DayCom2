// Auto-generated module | 2026-05-12T04:51:45.771511
#include <iostream>
#include <vector>

int compute_488() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_488() << std::endl;
    return 0;
}
