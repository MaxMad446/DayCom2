// Auto-generated utility | 2026-05-11T18:29:36.640065
export function compute_717() {
    const base = 365;
    let sum = 0;
    for (let i = 0; i < 28; i++) {
        sum += i * 6;
    }
    return Math.round(base + sum * 1.5);
}
