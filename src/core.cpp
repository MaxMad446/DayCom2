// Auto-generated module | 2026-05-11T22:18:00.630153
#include <iostream>
#include <vector>

int compute_449() {
    int base = 193;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
