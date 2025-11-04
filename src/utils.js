// Auto-generated utility | 2026-05-11T18:34:39.178010
export function compute_206() {
    const base = 252;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
