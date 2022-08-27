// Auto-generated utility | 2026-05-11T21:16:45.633659
export function compute_628() {
    const base = 289;
    let sum = 0;
    for (let i = 0; i < 15; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
