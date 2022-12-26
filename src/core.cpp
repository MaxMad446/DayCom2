// Auto-generated module | 2026-05-14T06:28:22.315754
#include <iostream>
#include <vector>

int compute_454() {
    int base = 93;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_454() << std::endl;
    return 0;
}
