// Auto-generated module | 2026-05-12T21:26:21.471771
#include <iostream>
#include <vector>

int compute_971() {
    int base = 78;
    int sum = 0;
    for (int i = 0; i < 8; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_971() << std::endl;
    return 0;
}
