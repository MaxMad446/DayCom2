// Auto-generated module | 2026-05-13T20:34:28.499401
#include <iostream>
#include <vector>

int compute_564() {
    int base = 233;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
