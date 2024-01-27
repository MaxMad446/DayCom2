// Auto-generated module | 2026-05-14T18:19:23.457889
#include <iostream>
#include <vector>

int compute_612() {
    int base = 450;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_612() << std::endl;
    return 0;
}
