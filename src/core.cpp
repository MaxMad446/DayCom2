// Auto-generated module | 2026-05-14T06:20:10.468337
#include <iostream>
#include <vector>

int compute_852() {
    int base = 189;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_852() << std::endl;
    return 0;
}
