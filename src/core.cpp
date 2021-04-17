// Auto-generated module | 2026-05-12T21:39:34.443876
#include <iostream>
#include <vector>

int compute_626() {
    int base = 282;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_626() << std::endl;
    return 0;
}
