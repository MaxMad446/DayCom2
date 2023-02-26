// Auto-generated utility | 2026-05-13T20:31:42.284405
export function compute_966() {
    const base = 32;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
