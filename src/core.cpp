// Auto-generated module | 2026-05-12T03:57:22.996829
#include <iostream>
#include <vector>

int compute_317() {
    int base = 126;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_317() << std::endl;
    return 0;
}
