// Auto-generated module | 2026-05-11T21:07:51.517224
#include <iostream>
#include <vector>

int compute_735() {
    int base = 485;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_735() << std::endl;
    return 0;
}
