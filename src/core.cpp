// Auto-generated module | 2026-05-14T06:19:05.225359
#include <iostream>
#include <vector>

int compute_848() {
    int base = 293;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_848() << std::endl;
    return 0;
}
