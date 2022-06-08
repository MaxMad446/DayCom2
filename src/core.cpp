// Auto-generated module | 2026-05-11T21:06:04.011083
#include <iostream>
#include <vector>

int compute_103() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_103() << std::endl;
    return 0;
}
