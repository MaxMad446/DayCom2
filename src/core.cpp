// Auto-generated module | 2026-05-12T21:15:50.141618
#include <iostream>
#include <vector>

int compute_329() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
