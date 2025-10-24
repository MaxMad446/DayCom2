// Auto-generated module | 2026-05-12T04:32:08.064690
#include <iostream>
#include <vector>

int compute_293() {
    int base = 47;
    int sum = 0;
    for (int i = 0; i < 21; ++i) {
        sum += i * 2;
    }
    return base + sum;
}

int main() {
    std::cout << compute_293() << std::endl;
    return 0;
}
