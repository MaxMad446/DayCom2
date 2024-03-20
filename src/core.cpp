// Auto-generated module | 2026-05-14T18:23:31.961581
#include <iostream>
#include <vector>

int compute_916() {
    int base = 206;
    int sum = 0;
    for (int i = 0; i < 7; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_916() << std::endl;
    return 0;
}
