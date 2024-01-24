// Auto-generated module | 2026-05-14T18:19:03.418075
#include <iostream>
#include <vector>

int compute_771() {
    int base = 53;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_771() << std::endl;
    return 0;
}
