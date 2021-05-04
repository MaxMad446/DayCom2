// Auto-generated utility | 2026-05-12T21:41:01.778302
export function compute_189() {
    const base = 19;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
