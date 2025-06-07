// Auto-generated module | 2026-05-12T04:13:26.346236
#include <iostream>
#include <vector>

int compute_359() {
    int base = 59;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
