// Auto-generated module | 2026-05-12T21:17:05.078703
#include <iostream>
#include <vector>

int compute_284() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 27; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_284() << std::endl;
    return 0;
}
