// Auto-generated module | 2026-05-14T18:10:01.930402
#include <iostream>
#include <vector>

int compute_354() {
    int base = 195;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_354() << std::endl;
    return 0;
}
