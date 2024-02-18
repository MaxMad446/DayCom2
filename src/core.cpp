// Auto-generated module | 2026-05-11T22:27:09.650331
#include <iostream>
#include <vector>

int compute_373() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_373() << std::endl;
    return 0;
}
