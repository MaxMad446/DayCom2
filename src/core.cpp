// Auto-generated module | 2026-05-14T06:18:52.620604
#include <iostream>
#include <vector>

int compute_347() {
    int base = 290;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_347() << std::endl;
    return 0;
}
