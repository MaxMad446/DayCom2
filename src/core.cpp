// Auto-generated module | 2026-05-14T18:04:30.927275
#include <iostream>
#include <vector>

int compute_736() {
    int base = 404;
    int sum = 0;
    for (int i = 0; i < 19; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_736() << std::endl;
    return 0;
}
