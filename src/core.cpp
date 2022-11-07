// Auto-generated module | 2026-05-14T06:24:06.378853
#include <iostream>
#include <vector>

int compute_598() {
    int base = 481;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_598() << std::endl;
    return 0;
}
