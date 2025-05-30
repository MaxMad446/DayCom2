// Auto-generated utility | 2026-05-11T18:13:45.337063
export function compute_990() {
    const base = 168;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
