// Auto-generated module | 2026-05-13T22:02:33.676040
#include <iostream>
#include <vector>

int compute_461() {
    int base = 348;
    int sum = 0;
    for (int i = 0; i < 20; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_461() << std::endl;
    return 0;
}
