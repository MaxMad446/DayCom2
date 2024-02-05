// Auto-generated module | 2026-05-11T22:25:17.458950
#include <iostream>
#include <vector>

int compute_314() {
    int base = 260;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
