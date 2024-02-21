// Auto-generated module | 2026-05-14T18:21:21.576083
#include <iostream>
#include <vector>

int compute_102() {
    int base = 373;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_102() << std::endl;
    return 0;
}
