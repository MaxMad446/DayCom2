// Auto-generated utility | 2026-05-11T21:29:18.746234
export function compute_702() {
    const base = 52;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
