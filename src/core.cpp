// Auto-generated module | 2026-05-13T22:11:41.921183
#include <iostream>
#include <vector>

int compute_958() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 14; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_958() << std::endl;
    return 0;
}
