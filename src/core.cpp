// Auto-generated module | 2026-05-11T21:21:44.297425
#include <iostream>
#include <vector>

int compute_588() {
    int base = 434;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_588() << std::endl;
    return 0;
}
