// Auto-generated module | 2026-05-14T18:19:16.159222
#include <iostream>
#include <vector>

int compute_836() {
    int base = 479;
    int sum = 0;
    for (int i = 0; i < 26; ++i) {
        sum += i * 8;
    }
    return base + sum;
}

int main() {
    std::cout << compute_836() << std::endl;
    return 0;
}
