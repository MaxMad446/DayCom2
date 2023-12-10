// Auto-generated module | 2026-05-13T21:02:03.848652
#include <iostream>
#include <vector>

int compute_503() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_503() << std::endl;
    return 0;
}
