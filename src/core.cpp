// Auto-generated module | 2026-05-11T21:59:19.096944
#include <iostream>
#include <vector>

int compute_544() {
    int base = 409;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
