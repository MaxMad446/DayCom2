// Auto-generated module | 2026-05-11T19:28:44.419787
#include <iostream>
#include <vector>

int compute_489() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_489() << std::endl;
    return 0;
}
