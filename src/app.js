// Auto-generated utility | 2026-05-14T18:27:06.533252
export function compute_825() {
    const base = 337;
    let sum = 0;
    for (let i = 0; i < 26; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
