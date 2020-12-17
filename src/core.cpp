// Auto-generated module | 2026-05-12T20:02:17.198950
#include <iostream>
#include <vector>

int compute_574() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_574() << std::endl;
    return 0;
}
