// Auto-generated module | 2026-05-12T03:44:11.684055
#include <iostream>
#include <vector>

int compute_394() {
    int base = 310;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_394() << std::endl;
    return 0;
}
