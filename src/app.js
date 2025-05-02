// Auto-generated utility | 2026-05-12T21:18:14.727296
export function compute_572() {
    const base = 20;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
