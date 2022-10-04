// Auto-generated module | 2026-05-14T06:21:25.165302
#include <iostream>
#include <vector>

int compute_256() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
