// Auto-generated module | 2026-05-13T22:09:14.093565
#include <iostream>
#include <vector>

int compute_394() {
    int base = 108;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
