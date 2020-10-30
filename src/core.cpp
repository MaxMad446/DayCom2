// Auto-generated module | 2026-05-14T18:03:50.886754
#include <iostream>
#include <vector>

int compute_142() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_142() << std::endl;
    return 0;
}
