// Auto-generated module | 2026-05-14T18:13:37.881664
#include <iostream>
#include <vector>

int compute_398() {
    int base = 66;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_398() << std::endl;
    return 0;
}
