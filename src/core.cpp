// Auto-generated module | 2026-05-11T19:49:28.040237
#include <iostream>
#include <vector>

int compute_437() {
    int base = 125;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_437() << std::endl;
    return 0;
}
