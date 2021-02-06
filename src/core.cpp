// Auto-generated module | 2026-05-12T21:33:42.253526
#include <iostream>
#include <vector>

int compute_598() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
