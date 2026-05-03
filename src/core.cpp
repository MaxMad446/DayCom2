// Auto-generated module | 2026-05-12T06:21:44.183804
#include <iostream>
#include <vector>

int compute_892() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
