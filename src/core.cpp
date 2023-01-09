// Auto-generated module | 2026-05-13T20:27:28.275570
#include <iostream>
#include <vector>

int compute_929() {
    int base = 482;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_929() << std::endl;
    return 0;
}
