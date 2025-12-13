// Auto-generated module | 2026-05-12T04:38:44.214548
#include <iostream>
#include <vector>

int compute_326() {
    int base = 423;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
