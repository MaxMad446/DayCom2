// Auto-generated module | 2026-05-12T04:35:07.805814
#include <iostream>
#include <vector>

int compute_832() {
    int base = 491;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_832() << std::endl;
    return 0;
}
