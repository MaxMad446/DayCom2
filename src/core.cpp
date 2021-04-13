// Auto-generated module | 2026-05-12T21:39:10.472970
#include <iostream>
#include <vector>

int compute_506() {
    int base = 96;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
