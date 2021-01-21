// Auto-generated module | 2026-05-14T18:15:12.239580
#include <iostream>
#include <vector>

int compute_470() {
    int base = 291;
    int sum = 0;
    for (int i = 0; i < 9; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_470() << std::endl;
    return 0;
}
