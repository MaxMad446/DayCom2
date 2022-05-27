// Auto-generated module | 2026-05-11T21:04:20.192644
#include <iostream>
#include <vector>

int compute_437() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
