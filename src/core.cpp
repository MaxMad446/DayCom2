// Auto-generated module | 2026-05-12T21:21:54.988226
#include <iostream>
#include <vector>

int compute_243() {
    int base = 218;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_243() << std::endl;
    return 0;
}
