// Auto-generated module | 2026-05-13T20:57:32.459757
#include <iostream>
#include <vector>

int compute_314() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
