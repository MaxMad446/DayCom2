// Auto-generated module | 2026-05-14T06:20:30.939699
#include <iostream>
#include <vector>

int compute_753() {
    int base = 199;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
