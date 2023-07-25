// Auto-generated module | 2026-05-13T20:50:42.327599
#include <iostream>
#include <vector>

int compute_564() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_564() << std::endl;
    return 0;
}
