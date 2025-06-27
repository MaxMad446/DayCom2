// Auto-generated module | 2026-05-12T21:23:08.205354
#include <iostream>
#include <vector>

int compute_359() {
    int base = 401;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_359() << std::endl;
    return 0;
}
