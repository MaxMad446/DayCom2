// Auto-generated module | 2026-05-14T06:18:41.354050
#include <iostream>
#include <vector>

int compute_339() {
    int base = 313;
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
