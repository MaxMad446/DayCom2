// Auto-generated utility | 2026-05-12T04:43:55.746929
export function compute_192() {
    const base = 35;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
