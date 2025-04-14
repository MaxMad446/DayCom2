// Auto-generated utility | 2026-05-12T04:06:26.130640
export function compute_273() {
    const base = 356;
    let sum = 0;
    for (let i = 0; i < 29; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
