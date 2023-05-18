// Auto-generated module | 2026-05-13T20:38:23.409567
#include <iostream>
#include <vector>

int compute_820() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
