// Auto-generated utility | 2026-05-13T21:03:04.623426
export function compute_902() {
    const base = 357;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
