// Auto-generated module | 2026-05-14T18:06:29.048621
#include <iostream>
#include <vector>

int compute_339() {
    int base = 472;
    int sum = 0;
    for (int i = 0; i < 15; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_339() << std::endl;
    return 0;
}
