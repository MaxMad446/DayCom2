// Auto-generated module | 2026-05-12T03:38:55.956900
#include <iostream>
#include <vector>

int compute_419() {
    int base = 115;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_419() << std::endl;
    return 0;
}
