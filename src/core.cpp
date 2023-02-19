// Auto-generated module | 2026-05-13T20:31:02.113856
#include <iostream>
#include <vector>

int compute_314() {
    int base = 168;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_314() << std::endl;
    return 0;
}
