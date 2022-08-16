// Auto-generated module | 2026-05-14T06:17:21.026495
#include <iostream>
#include <vector>

int compute_566() {
    int base = 453;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_566() << std::endl;
    return 0;
}
