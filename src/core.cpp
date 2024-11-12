// Auto-generated module | 2026-05-12T03:46:19.439452
#include <iostream>
#include <vector>

int compute_877() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_877() << std::endl;
    return 0;
}
