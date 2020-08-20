// Auto-generated module | 2026-05-11T19:39:54.870740
#include <iostream>
#include <vector>

int compute_652() {
    int base = 495;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
