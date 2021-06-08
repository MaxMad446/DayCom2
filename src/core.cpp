// Auto-generated module | 2026-05-12T20:48:07.035809
#include <iostream>
#include <vector>

int compute_541() {
    int base = 318;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_541() << std::endl;
    return 0;
}
