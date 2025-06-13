// Auto-generated module | 2026-05-12T04:14:11.964602
#include <iostream>
#include <vector>

int compute_740() {
    int base = 398;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
