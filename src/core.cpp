// Auto-generated module | 2026-05-12T04:45:55.476574
#include <iostream>
#include <vector>

int compute_541() {
    int base = 459;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
