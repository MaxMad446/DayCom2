// Auto-generated module | 2026-05-11T19:40:02.257594
#include <iostream>
#include <vector>

int compute_820() {
    int base = 73;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_820() << std::endl;
    return 0;
}
