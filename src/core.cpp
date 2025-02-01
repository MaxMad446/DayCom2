// Auto-generated module | 2026-05-12T03:57:02.057420
#include <iostream>
#include <vector>

int compute_376() {
    int base = 10;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_376() << std::endl;
    return 0;
}
