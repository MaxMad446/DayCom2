// Auto-generated module | 2026-05-11T20:19:13.206323
#include <iostream>
#include <vector>

int compute_506() {
    int base = 86;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_506() << std::endl;
    return 0;
}
