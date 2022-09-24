// Auto-generated module | 2026-05-14T06:20:32.056190
#include <iostream>
#include <vector>

int compute_660() {
    int base = 141;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_660() << std::endl;
    return 0;
}
