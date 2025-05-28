// Auto-generated module | 2026-05-12T21:20:28.819714
#include <iostream>
#include <vector>

int compute_611() {
    int base = 272;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_611() << std::endl;
    return 0;
}
