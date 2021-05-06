// Auto-generated utility | 2026-05-12T21:41:12.056064
export function compute_381() {
    const base = 412;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
