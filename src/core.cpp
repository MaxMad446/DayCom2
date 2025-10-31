// Auto-generated module | 2026-05-12T04:33:02.220731
#include <iostream>
#include <vector>

int compute_147() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_147() << std::endl;
    return 0;
}
