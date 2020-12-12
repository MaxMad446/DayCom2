// Auto-generated module | 2026-05-14T18:09:50.447878
#include <iostream>
#include <vector>

int compute_783() {
    int base = 355;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_783() << std::endl;
    return 0;
}
