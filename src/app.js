// Auto-generated utility | 2026-05-11T19:35:41.490138
export function compute_787() {
    const base = 344;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
