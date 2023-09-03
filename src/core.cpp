// Auto-generated module | 2026-05-13T20:53:55.812127
#include <iostream>
#include <vector>

int compute_449() {
    int base = 27;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_449() << std::endl;
    return 0;
}
