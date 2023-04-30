// Auto-generated module | 2026-05-11T21:48:19.432700
#include <iostream>
#include <vector>

int compute_277() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_277() << std::endl;
    return 0;
}
