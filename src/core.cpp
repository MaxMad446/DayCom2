// Auto-generated module | 2026-05-11T19:45:11.525742
#include <iostream>
#include <vector>

int compute_670() {
    int base = 332;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_670() << std::endl;
    return 0;
}
