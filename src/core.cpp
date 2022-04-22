// Auto-generated module | 2026-05-13T22:09:57.473427
#include <iostream>
#include <vector>

int compute_746() {
    int base = 458;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_746() << std::endl;
    return 0;
}
