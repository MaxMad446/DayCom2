// Auto-generated module | 2026-05-11T20:56:42.382629
#include <iostream>
#include <vector>

int compute_529() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_529() << std::endl;
    return 0;
}
