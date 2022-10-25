// Auto-generated module | 2026-05-14T06:23:06.747509
#include <iostream>
#include <vector>

int compute_793() {
    int base = 414;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
