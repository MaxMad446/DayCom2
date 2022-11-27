// Auto-generated module | 2026-05-14T06:25:49.175289
#include <iostream>
#include <vector>

int compute_765() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_765() << std::endl;
    return 0;
}
