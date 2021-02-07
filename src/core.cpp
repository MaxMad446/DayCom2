// Auto-generated module | 2026-05-12T21:33:46.136067
#include <iostream>
#include <vector>

int compute_254() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_254() << std::endl;
    return 0;
}
