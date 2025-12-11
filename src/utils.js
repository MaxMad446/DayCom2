// Auto-generated utility | 2026-05-11T18:39:08.791005
export function compute_377() {
    const base = 230;
    let sum = 0;
    for (let i = 0; i < 8; i++) {
        sum += i * 7;
    }
    return Math.round(base + sum * 1.5);
}
