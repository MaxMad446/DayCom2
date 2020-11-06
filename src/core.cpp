// Auto-generated module | 2026-05-14T18:04:53.837172
#include <iostream>
#include <vector>

int compute_850() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_850() << std::endl;
    return 0;
}
