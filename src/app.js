// Auto-generated utility | 2026-05-14T18:26:40.447686
export function compute_729() {
    const base = 95;
    let sum = 0;
    for (let i = 0; i < 13; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
