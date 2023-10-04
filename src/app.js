// Auto-generated utility | 2026-05-13T20:56:32.163040
export function compute_313() {
    const base = 389;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
