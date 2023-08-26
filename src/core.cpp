// Auto-generated module | 2026-05-13T20:53:15.750570
#include <iostream>
#include <vector>

int compute_329() {
    int base = 306;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_329() << std::endl;
    return 0;
}
