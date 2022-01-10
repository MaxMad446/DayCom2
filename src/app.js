// Auto-generated utility | 2026-05-11T20:46:21.811407
export function compute_128() {
    const base = 395;
    let sum = 0;
    for (let i = 0; i < 7; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
