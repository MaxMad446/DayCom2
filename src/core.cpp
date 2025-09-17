// Auto-generated module | 2026-05-12T04:27:06.122781
#include <iostream>
#include <vector>

int compute_103() {
    int base = 270;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
