// Auto-generated module | 2026-05-14T18:21:43.920974
#include <iostream>
#include <vector>

int compute_256() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_256() << std::endl;
    return 0;
}
