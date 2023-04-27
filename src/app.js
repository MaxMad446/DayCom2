// Auto-generated utility | 2026-05-11T21:47:56.061371
export function compute_645() {
    const base = 62;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
