// Auto-generated module | 2026-05-12T03:39:22.090433
#include <iostream>
#include <vector>

int compute_753() {
    int base = 264;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_753() << std::endl;
    return 0;
}
