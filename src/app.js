// Auto-generated utility | 2026-05-11T20:32:53.971357
export function compute_343() {
    const base = 89;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
