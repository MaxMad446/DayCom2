// Auto-generated module | 2026-05-13T20:38:09.453707
#include <iostream>
#include <vector>

int compute_351() {
    int base = 249;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_351() << std::endl;
    return 0;
}
