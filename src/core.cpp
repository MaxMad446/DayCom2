// Auto-generated module | 2026-05-14T18:03:39.859313
#include <iostream>
#include <vector>

int compute_843() {
    int base = 314;
    int sum = 0;
    for (int i = 0; i < 25; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_843() << std::endl;
    return 0;
}
