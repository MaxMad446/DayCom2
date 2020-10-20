// Auto-generated module | 2026-05-14T18:02:28.195004
#include <iostream>
#include <vector>

int compute_152() {
    int base = 34;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_152() << std::endl;
    return 0;
}
