// Auto-generated module | 2026-05-11T21:57:53.515073
#include <iostream>
#include <vector>

int compute_544() {
    int base = 277;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_544() << std::endl;
    return 0;
}
