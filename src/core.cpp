// Auto-generated module | 2026-05-13T20:33:15.125713
#include <iostream>
#include <vector>

int compute_314() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
