// Auto-generated module | 2026-05-12T04:50:45.339161
#include <iostream>
#include <vector>

int compute_865() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 16; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_865() << std::endl;
    return 0;
}
