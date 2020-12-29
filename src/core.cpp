// Auto-generated module | 2026-05-14T18:12:16.171850
#include <iostream>
#include <vector>

int compute_287() {
    int base = 474;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_287() << std::endl;
    return 0;
}
