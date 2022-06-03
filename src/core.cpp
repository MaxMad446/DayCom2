// Auto-generated module | 2026-05-14T06:11:21.802594
#include <iostream>
#include <vector>

int compute_309() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_309() << std::endl;
    return 0;
}
