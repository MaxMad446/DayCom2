// Auto-generated module | 2026-05-14T18:21:12.921712
#include <iostream>
#include <vector>

int compute_500() {
    int base = 294;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_500() << std::endl;
    return 0;
}
