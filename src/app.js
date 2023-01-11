// Auto-generated utility | 2026-05-11T21:34:31.834236
export function compute_514() {
    const base = 250;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
