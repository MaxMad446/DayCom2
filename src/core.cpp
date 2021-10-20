// Auto-generated module | 2026-05-11T20:35:32.837688
#include <iostream>
#include <vector>

int compute_781() {
    int base = 317;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_781() << std::endl;
    return 0;
}
