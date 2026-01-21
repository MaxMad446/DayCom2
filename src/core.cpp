// Auto-generated module | 2026-05-12T04:44:04.201433
#include <iostream>
#include <vector>

int compute_843() {
    int base = 200;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
