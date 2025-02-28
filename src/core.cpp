// Auto-generated module | 2026-05-12T04:00:50.643611
#include <iostream>
#include <vector>

int compute_147() {
    int base = 419;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
