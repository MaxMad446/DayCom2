// Auto-generated module | 2026-05-12T19:58:47.439902
#include <iostream>
#include <vector>

int compute_814() {
    int base = 265;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_814() << std::endl;
    return 0;
}
