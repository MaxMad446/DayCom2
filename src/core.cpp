// Auto-generated module | 2026-05-14T06:26:43.996838
#include <iostream>
#include <vector>

int compute_550() {
    int base = 412;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
