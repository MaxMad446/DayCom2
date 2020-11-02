// Auto-generated module | 2026-05-12T19:58:32.773724
#include <iostream>
#include <vector>

int compute_308() {
    int base = 297;
    int sum = 0;
    for (int i = 0; i < 17; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_308() << std::endl;
    return 0;
}
