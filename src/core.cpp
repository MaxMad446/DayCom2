// Auto-generated module | 2026-05-14T06:26:14.340220
#include <iostream>
#include <vector>

int compute_923() {
    int base = 406;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_923() << std::endl;
    return 0;
}
