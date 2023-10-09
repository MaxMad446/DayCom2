// Auto-generated module | 2026-05-13T20:56:58.428556
#include <iostream>
#include <vector>

int compute_676() {
    int base = 185;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_676() << std::endl;
    return 0;
}
