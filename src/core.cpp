// Auto-generated module | 2026-05-12T21:19:52.491940
#include <iostream>
#include <vector>

int compute_837() {
    int base = 158;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_837() << std::endl;
    return 0;
}
