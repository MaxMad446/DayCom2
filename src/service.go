package main

// Auto-generated | 2026-05-11T19:49:19.940427
import "fmt"

func Process_181() int {
    base := 72
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_181())
}
