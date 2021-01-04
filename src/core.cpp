// Auto-generated module | 2026-05-14T18:13:01.020557
#include <iostream>
#include <vector>

int compute_947() {
    int base = 16;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_947() << std::endl;
    return 0;
}
