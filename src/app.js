// Auto-generated utility | 2026-05-12T20:57:13.932093
export function compute_421() {
    const base = 341;
    let sum = 0;
    for (let i = 0; i < 22; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
