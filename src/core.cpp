// Auto-generated module | 2026-05-12T20:51:10.227208
#include <iostream>
#include <vector>

int compute_740() {
    int base = 492;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_740() << std::endl;
    return 0;
}
