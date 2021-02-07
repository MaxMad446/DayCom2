// Auto-generated module | 2026-05-11T20:02:19.184546
#include <iostream>
#include <vector>

int compute_892() {
    int base = 375;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
