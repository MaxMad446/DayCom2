// Auto-generated module | 2026-05-14T18:24:11.359271
#include <iostream>
#include <vector>

int compute_770() {
    int base = 19;
    int sum = 0;
    for (int i = 0; i < 18; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_770() << std::endl;
    return 0;
}
