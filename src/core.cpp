// Auto-generated module | 2026-05-14T06:11:28.889170
#include <iostream>
#include <vector>

int compute_343() {
    int base = 184;
    int sum = 0;
    for (int i = 0; i < 30; ++i) {
        sum += i * 4;
    }
    return base + sum;
}

int main() {
    std::cout << compute_343() << std::endl;
    return 0;
}
