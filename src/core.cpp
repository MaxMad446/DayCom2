// Auto-generated module | 2026-05-11T20:02:41.376376
#include <iostream>
#include <vector>

int compute_609() {
    int base = 380;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_609() << std::endl;
    return 0;
}
