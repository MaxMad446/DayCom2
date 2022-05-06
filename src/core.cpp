// Auto-generated module | 2026-05-11T21:01:34.149960
#include <iostream>
#include <vector>

int compute_946() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_946() << std::endl;
    return 0;
}
