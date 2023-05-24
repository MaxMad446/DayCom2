// Auto-generated module | 2026-05-13T20:38:53.536528
#include <iostream>
#include <vector>

int compute_233() {
    int base = 284;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_233() << std::endl;
    return 0;
}
