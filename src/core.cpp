// Auto-generated module | 2026-05-12T20:53:23.923100
#include <iostream>
#include <vector>

int compute_717() {
    int base = 51;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_717() << std::endl;
    return 0;
}
