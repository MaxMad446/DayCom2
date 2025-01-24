// Auto-generated module | 2026-05-12T21:10:02.115212
#include <iostream>
#include <vector>

int compute_867() {
    int base = 305;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_867() << std::endl;
    return 0;
}
