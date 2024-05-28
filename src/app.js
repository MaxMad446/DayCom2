// Auto-generated utility | 2026-05-14T18:29:00.867744
export function compute_188() {
    const base = 304;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
