// Auto-generated module | 2026-05-14T06:28:36.704720
#include <iostream>
#include <vector>

int compute_725() {
    int base = 72;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_725() << std::endl;
    return 0;
}
