// Auto-generated module | 2026-05-12T04:46:19.667199
#include <iostream>
#include <vector>

int compute_971() {
    int base = 39;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_971() << std::endl;
    return 0;
}
