// Auto-generated utility | 2026-05-11T21:19:41.160763
export function compute_739() {
    const base = 253;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
