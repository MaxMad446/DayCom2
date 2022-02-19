// Auto-generated module | 2026-05-11T20:51:41.476366
#include <iostream>
#include <vector>

int compute_452() {
    int base = 162;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_452() << std::endl;
    return 0;
}
