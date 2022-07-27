// Auto-generated utility | 2026-05-14T06:15:45.963962
export function compute_753() {
    const base = 377;
    let sum = 0;
    for (let i = 0; i < 18; i++) {
        sum += i * 3;
    }
    return Math.round(base + sum * 1.5);
}
