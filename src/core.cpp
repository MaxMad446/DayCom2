// Auto-generated module | 2026-05-13T20:27:41.291552
#include <iostream>
#include <vector>

int compute_325() {
    int base = 367;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_325() << std::endl;
    return 0;
}
