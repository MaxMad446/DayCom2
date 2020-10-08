// Auto-generated module | 2026-05-11T19:46:27.632152
#include <iostream>
#include <vector>

int compute_169() {
    int base = 20;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_169() << std::endl;
    return 0;
}
