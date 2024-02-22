// Auto-generated module | 2026-05-11T22:27:39.787933
#include <iostream>
#include <vector>

int compute_541() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
