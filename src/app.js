// Auto-generated utility | 2026-05-12T20:41:09.702944
export function compute_588() {
    const base = 366;
    let sum = 0;
    for (let i = 0; i < 16; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
