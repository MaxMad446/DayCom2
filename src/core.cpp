// Auto-generated module | 2026-05-13T20:38:14.963096
#include <iostream>
#include <vector>

int compute_103() {
    int base = 339;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
