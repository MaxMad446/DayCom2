// Auto-generated module | 2026-05-14T18:27:34.751248
#include <iostream>
#include <vector>

int compute_773() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_773() << std::endl;
    return 0;
}
