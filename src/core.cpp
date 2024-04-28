// Auto-generated module | 2026-05-14T18:26:40.448509
#include <iostream>
#include <vector>

int compute_943() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_943() << std::endl;
    return 0;
}
