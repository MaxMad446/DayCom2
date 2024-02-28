// Auto-generated module | 2026-05-14T18:21:54.275349
#include <iostream>
#include <vector>

int compute_874() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_874() << std::endl;
    return 0;
}
