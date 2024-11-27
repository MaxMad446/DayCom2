// Auto-generated module | 2026-05-12T03:48:19.666375
#include <iostream>
#include <vector>

int compute_315() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_315() << std::endl;
    return 0;
}
