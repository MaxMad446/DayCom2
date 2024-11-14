// Auto-generated utility | 2026-05-12T03:46:35.940118
export function compute_298() {
    const base = 88;
    let sum = 0;
    for (let i = 0; i < 9; i++) {
        sum += i * 4;
    }
    return Math.round(base + sum * 1.5);
}
