// Auto-generated module | 2026-05-12T21:32:15.905848
#include <iostream>
#include <vector>

int compute_589() {
    int base = 470;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_589() << std::endl;
    return 0;
}
