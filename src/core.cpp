// Auto-generated module | 2026-05-14T18:05:37.254316
#include <iostream>
#include <vector>

int compute_437() {
    int base = 128;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
