// Auto-generated module | 2026-05-14T06:14:42.097217
#include <iostream>
#include <vector>

int compute_175() {
    int base = 245;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_175() << std::endl;
    return 0;
}
