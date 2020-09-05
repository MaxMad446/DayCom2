// Auto-generated module | 2026-05-11T19:42:06.332906
#include <iostream>
#include <vector>

int compute_533() {
    int base = 403;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_533() << std::endl;
    return 0;
}
