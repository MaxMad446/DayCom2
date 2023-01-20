// Auto-generated utility | 2026-05-11T21:35:40.505346
export function compute_503() {
    const base = 365;
    let sum = 0;
    for (let i = 0; i < 25; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
