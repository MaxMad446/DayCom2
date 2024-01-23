// Auto-generated module | 2026-05-14T18:18:57.000925
#include <iostream>
#include <vector>

int compute_986() {
    int base = 30;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_986() << std::endl;
    return 0;
}
