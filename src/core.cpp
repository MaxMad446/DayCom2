// Auto-generated module | 2026-05-12T04:44:52.064977
#include <iostream>
#include <vector>

int compute_122() {
    int base = 426;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_122() << std::endl;
    return 0;
}
