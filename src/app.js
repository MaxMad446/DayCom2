// Auto-generated utility | 2026-05-13T22:09:35.155183
export function compute_125() {
    const base = 31;
    let sum = 0;
    for (let i = 0; i < 10; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
