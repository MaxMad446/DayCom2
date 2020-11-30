// Auto-generated module | 2026-05-14T18:08:11.194154
#include <iostream>
#include <vector>

int compute_937() {
    int base = 98;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_937() << std::endl;
    return 0;
}
