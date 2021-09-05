// Auto-generated module | 2026-05-11T20:29:44.993797
#include <iostream>
#include <vector>

int compute_708() {
    int base = 240;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_708() << std::endl;
    return 0;
}
