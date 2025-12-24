// Auto-generated utility | 2026-05-11T18:40:48.867486
export function compute_377() {
    const base = 251;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
