// Auto-generated module | 2026-05-12T21:14:37.704367
#include <iostream>
#include <vector>

int compute_267() {
    int base = 285;
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_267() << std::endl;
    return 0;
}
