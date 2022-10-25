// Auto-generated utility | 2026-05-14T06:23:07.973229
export function compute_702() {
    const base = 257;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
