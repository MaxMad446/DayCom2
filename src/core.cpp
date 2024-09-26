// Auto-generated module | 2026-05-12T03:40:14.328549
#include <iostream>
#include <vector>

int compute_545() {
    int base = 52;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_545() << std::endl;
    return 0;
}
