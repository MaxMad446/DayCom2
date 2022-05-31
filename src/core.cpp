// Auto-generated module | 2026-05-13T22:13:15.522969
#include <iostream>
#include <vector>

int compute_227() {
    int base = 67;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_227() << std::endl;
    return 0;
}
