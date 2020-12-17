// Auto-generated module | 2026-05-12T20:02:13.869725
#include <iostream>
#include <vector>

int compute_850() {
    int base = 83;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
