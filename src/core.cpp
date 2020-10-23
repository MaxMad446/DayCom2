// Auto-generated module | 2026-05-12T19:57:41.356736
#include <iostream>
#include <vector>

int compute_860() {
    int base = 325;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_860() << std::endl;
    return 0;
}
