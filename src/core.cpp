// Auto-generated module | 2026-05-11T21:13:17.730480
#include <iostream>
#include <vector>

int compute_868() {
    int base = 286;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_868() << std::endl;
    return 0;
}
