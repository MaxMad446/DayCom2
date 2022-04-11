// Auto-generated module | 2026-05-13T22:08:54.910071
#include <iostream>
#include <vector>

int compute_779() {
    int base = 103;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_779() << std::endl;
    return 0;
}
