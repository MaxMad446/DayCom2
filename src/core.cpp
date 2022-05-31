// Auto-generated module | 2026-05-13T22:13:14.469839
#include <iostream>
#include <vector>

int compute_141() {
    int base = 18;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_141() << std::endl;
    return 0;
}
