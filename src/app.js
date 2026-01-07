// Auto-generated utility | 2026-05-12T04:42:18.178777
export function compute_740() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 9; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
