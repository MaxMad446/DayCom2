// Auto-generated module | 2026-05-12T03:38:44.865724
#include <iostream>
#include <vector>

int compute_232() {
    int base = 396;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_232() << std::endl;
    return 0;
}
