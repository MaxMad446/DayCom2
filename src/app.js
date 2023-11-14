// Auto-generated utility | 2026-05-13T20:59:56.259440
export function compute_387() {
    const base = 231;
    let sum = 0;
    for (let i = 0; i < 7; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
