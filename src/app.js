// Auto-generated utility | 2026-05-11T21:58:33.328381
export function compute_625() {
    const base = 242;
    let sum = 0;
    for (let i = 0; i < 21; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
