// Auto-generated module | 2026-05-14T18:17:41.517027
#include <iostream>
#include <vector>

int compute_892() {
    int base = 181;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 3;
    }
    return base + sum;
}

int main() {
    std::cout << compute_892() << std::endl;
    return 0;
}
