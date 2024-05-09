// Auto-generated module | 2026-05-14T18:27:36.031867
#include <iostream>
#include <vector>

int compute_395() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_395() << std::endl;
    return 0;
}
