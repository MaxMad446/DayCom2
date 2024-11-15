// Auto-generated module | 2026-05-12T03:46:51.254642
#include <iostream>
#include <vector>

int compute_842() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_842() << std::endl;
    return 0;
}
