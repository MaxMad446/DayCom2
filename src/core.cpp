// Auto-generated module | 2026-05-13T22:03:00.964927
#include <iostream>
#include <vector>

int compute_793() {
    int base = 447;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_793() << std::endl;
    return 0;
}
