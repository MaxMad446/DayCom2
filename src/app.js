// Auto-generated utility | 2026-05-11T22:32:15.239407
export function compute_574() {
    const base = 380;
    let sum = 0;
    for (let i = 0; i < 24; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
