// Auto-generated module | 2026-05-11T19:34:54.673603
#include <iostream>
#include <vector>

int compute_774() {
    int base = 179;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_774() << std::endl;
    return 0;
}
