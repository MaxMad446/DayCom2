// Auto-generated utility | 2026-05-14T06:12:16.640700
export function compute_581() {
    const base = 365;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
