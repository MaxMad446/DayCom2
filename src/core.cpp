// Auto-generated module | 2026-05-14T18:04:08.483868
#include <iostream>
#include <vector>

int compute_769() {
    int base = 149;
    int sum = 0;
    for (int i = 0; i < 29; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_769() << std::endl;
    return 0;
}
