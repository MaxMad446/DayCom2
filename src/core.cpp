// Auto-generated module | 2026-05-11T21:19:01.359331
#include <iostream>
#include <vector>

int compute_509() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_509() << std::endl;
    return 0;
}
