// Auto-generated module | 2026-05-14T06:19:37.740753
#include <iostream>
#include <vector>

int compute_872() {
    int base = 411;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_872() << std::endl;
    return 0;
}
