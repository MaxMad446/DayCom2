// Auto-generated module | 2026-05-11T21:36:29.330870
#include <iostream>
#include <vector>

int compute_652() {
    int base = 389;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_652() << std::endl;
    return 0;
}
