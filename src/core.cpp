// Auto-generated module | 2026-05-11T21:28:29.973034
#include <iostream>
#include <vector>

int compute_753() {
    int base = 32;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
