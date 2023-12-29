// Auto-generated module | 2026-05-13T21:03:39.290933
#include <iostream>
#include <vector>

int compute_840() {
    int base = 48;
    int sum = 0;
    for (int i = 0; i < 23; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_840() << std::endl;
    return 0;
}
