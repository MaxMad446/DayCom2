// Auto-generated module | 2026-05-12T21:08:41.318438
#include <iostream>
#include <vector>

int compute_541() {
    int base = 234;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
