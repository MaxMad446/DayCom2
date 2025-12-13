// Auto-generated module | 2026-05-12T04:38:45.360163
#include <iostream>
#include <vector>

int compute_442() {
    int base = 366;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_442() << std::endl;
    return 0;
}
