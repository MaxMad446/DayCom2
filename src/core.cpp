// Auto-generated module | 2026-05-12T04:38:23.383618
#include <iostream>
#include <vector>

int compute_112() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 22; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_112() << std::endl;
    return 0;
}
