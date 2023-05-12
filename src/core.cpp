// Auto-generated module | 2026-05-11T21:49:59.681859
#include <iostream>
#include <vector>

int compute_192() {
    int base = 295;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_192() << std::endl;
    return 0;
}
