// Auto-generated module | 2026-05-12T04:01:57.166767
#include <iostream>
#include <vector>

int compute_988() {
    int base = 243;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_988() << std::endl;
    return 0;
}
