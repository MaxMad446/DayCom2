// Auto-generated module | 2026-05-13T22:02:12.716098
#include <iostream>
#include <vector>

int compute_858() {
    int base = 364;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_858() << std::endl;
    return 0;
}
