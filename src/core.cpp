// Auto-generated module | 2026-05-14T18:15:14.561533
#include <iostream>
#include <vector>

int compute_653() {
    int base = 102;
    int sum = 0;
    for (int i = 0; i < 24; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_653() << std::endl;
    return 0;
}
