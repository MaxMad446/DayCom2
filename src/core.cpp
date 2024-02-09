// Auto-generated module | 2026-05-14T18:20:25.125664
#include <iostream>
#include <vector>

int compute_294() {
    int base = 341;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
