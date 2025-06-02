// Auto-generated utility | 2026-05-11T18:14:04.847771
export function compute_790() {
    const base = 37;
    let sum = 0;
    for (let i = 0; i < 19; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
