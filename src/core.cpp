// Auto-generated module | 2026-05-14T18:07:41.222420
#include <iostream>
#include <vector>

int compute_655() {
    int base = 289;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_655() << std::endl;
    return 0;
}
