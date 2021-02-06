// Auto-generated module | 2026-05-12T20:38:02.518814
#include <iostream>
#include <vector>

int compute_826() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_826() << std::endl;
    return 0;
}
