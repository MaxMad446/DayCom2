// Auto-generated utility | 2026-05-12T04:49:45.551088
export function compute_745() {
    const base = 196;
    let sum = 0;
    for (let i = 0; i < 14; i++) {
        sum += i * 8;
    }
    return Math.round(base + sum * 1.5);
}
