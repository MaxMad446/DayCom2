// Auto-generated module | 2026-05-14T18:14:27.173685
#include <iostream>
#include <vector>

int compute_261() {
    int base = 480;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_261() << std::endl;
    return 0;
}
