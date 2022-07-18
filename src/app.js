// Auto-generated utility | 2026-05-11T21:11:25.663571
export function compute_377() {
    const base = 384;
    let sum = 0;
    for (let i = 0; i < 17; i++) {
        sum += i * 5;
    }
    return Math.round(base + sum * 1.5);
}
