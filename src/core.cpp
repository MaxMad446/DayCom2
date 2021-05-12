// Auto-generated module | 2026-05-12T20:45:46.721979
#include <iostream>
#include <vector>

int compute_571() {
    int base = 323;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_571() << std::endl;
    return 0;
}
