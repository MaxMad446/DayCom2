// Auto-generated module | 2026-05-12T04:08:20.473434
#include <iostream>
#include <vector>

int compute_294() {
    int base = 36;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_294() << std::endl;
    return 0;
}
