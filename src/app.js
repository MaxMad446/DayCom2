// Auto-generated utility | 2026-05-11T21:03:53.047484
export function compute_760() {
    const base = 387;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
