// Auto-generated utility | 2026-05-13T21:00:24.542608
export function compute_936() {
    const base = 37;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
