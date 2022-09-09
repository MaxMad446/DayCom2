// Auto-generated module | 2026-05-14T06:19:17.950840
#include <iostream>
#include <vector>

int compute_601() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_601() << std::endl;
    return 0;
}
