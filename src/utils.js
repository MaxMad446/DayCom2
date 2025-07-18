// Auto-generated utility | 2026-05-11T18:20:04.791644
export function compute_828() {
    const base = 500;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
