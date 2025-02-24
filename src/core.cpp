// Auto-generated module | 2026-05-12T21:12:45.868530
#include <iostream>
#include <vector>

int compute_140() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_140() << std::endl;
    return 0;
}
