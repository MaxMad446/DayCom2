// Auto-generated module | 2026-05-12T06:20:13.039243
#include <iostream>
#include <vector>

int compute_355() {
    int base = 483;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_355() << std::endl;
    return 0;
}
