// Auto-generated module | 2026-05-13T22:02:41.315620
#include <iostream>
#include <vector>

int compute_181() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_181() << std::endl;
    return 0;
}
