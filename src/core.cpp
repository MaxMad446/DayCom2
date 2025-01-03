// Auto-generated module | 2026-05-12T03:53:19.665639
#include <iostream>
#include <vector>

int compute_270() {
    int base = 238;
    int sum = 0;
    for (int i = 0; i < 13; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_270() << std::endl;
    return 0;
}
