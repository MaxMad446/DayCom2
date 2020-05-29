// Auto-generated module | 2026-05-11T19:28:55.447823
#include <iostream>
#include <vector>

int compute_991() {
    int base = 473;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_991() << std::endl;
    return 0;
}
