// Auto-generated module | 2026-05-12T04:33:23.203854
#include <iostream>
#include <vector>

int compute_449() {
    int base = 465;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
