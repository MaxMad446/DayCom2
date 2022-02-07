// Auto-generated utility | 2026-05-13T22:03:33.126298
export function compute_382() {
    const base = 96;
    let sum = 0;
    for (let i = 0; i < 12; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
