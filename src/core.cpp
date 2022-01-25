// Auto-generated module | 2026-05-13T22:02:32.381752
#include <iostream>
#include <vector>

int compute_751() {
    int base = 217;
    int sum = 0;
    for (int i = 0; i < 11; ++i) {
        sum += i * 5;
    }
    return base + sum;
}

int main() {
    std::cout << compute_751() << std::endl;
    return 0;
}
