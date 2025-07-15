// Auto-generated module | 2026-05-12T21:24:42.882640
#include <iostream>
#include <vector>

int compute_816() {
    int base = 169;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_816() << std::endl;
    return 0;
}
