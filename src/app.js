// Auto-generated utility | 2026-05-11T20:13:35.558467
export function compute_754() {
    const base = 344;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
