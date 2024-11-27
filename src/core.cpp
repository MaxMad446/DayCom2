// Auto-generated module | 2026-05-12T03:48:16.581751
#include <iostream>
#include <vector>

int compute_442() {
    int base = 342;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
