// Auto-generated module | 2026-05-12T20:58:52.889765
#include <iostream>
#include <vector>

int compute_507() {
    int base = 29;
    int sum = 0;
    for (int i = 0; i < 28; ++i) {
        sum += i * 7;
    }
    return base + sum;
}

int main() {
    std::cout << compute_507() << std::endl;
    return 0;
}
