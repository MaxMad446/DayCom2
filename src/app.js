// Auto-generated utility | 2026-05-11T21:55:10.736772
export function compute_975() {
    const base = 160;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
