// Auto-generated module | 2026-05-12T06:21:55.994459
#include <iostream>
#include <vector>

int compute_101() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_101() << std::endl;
    return 0;
}
