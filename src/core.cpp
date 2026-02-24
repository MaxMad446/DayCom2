// Auto-generated module | 2026-05-12T04:48:53.223766
#include <iostream>
#include <vector>

int compute_583() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_583() << std::endl;
    return 0;
}
