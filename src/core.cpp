// Auto-generated module | 2026-05-14T18:11:16.862788
#include <iostream>
#include <vector>

int compute_185() {
    int base = 49;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_185() << std::endl;
    return 0;
}
