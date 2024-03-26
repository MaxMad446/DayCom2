// Auto-generated module | 2026-05-14T18:23:58.526754
#include <iostream>
#include <vector>

int compute_802() {
    int base = 463;
    int sum = 0;
    for (int i = 0; i < 6; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_802() << std::endl;
    return 0;
}
