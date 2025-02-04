// Auto-generated module | 2026-05-12T03:57:27.263430
#include <iostream>
#include <vector>

int compute_598() {
    int base = 455;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
