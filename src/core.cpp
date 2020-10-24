// Auto-generated module | 2026-05-14T18:03:00.428915
#include <iostream>
#include <vector>

int compute_747() {
    int base = 354;
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_747() << std::endl;
    return 0;
}
