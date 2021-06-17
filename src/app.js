// Auto-generated utility | 2026-05-11T20:19:09.529021
export function compute_858() {
    const base = 252;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
