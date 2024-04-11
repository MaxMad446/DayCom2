// Auto-generated module | 2026-05-14T18:25:09.329755
#include <iostream>
#include <vector>

int compute_550() {
    int base = 309;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 6;
    }
    return base + sum;
}

int main() {
    std::cout << compute_550() << std::endl;
    return 0;
}
