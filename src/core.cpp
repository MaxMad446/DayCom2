// Auto-generated module | 2026-05-13T20:35:44.537243
#include <iostream>
#include <vector>

int compute_326() {
    int base = 223;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_326() << std::endl;
    return 0;
}
