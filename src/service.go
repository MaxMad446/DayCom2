package main

// Auto-generated | 2026-05-13T20:58:46.976491
import "fmt"

func Process_164() int {
    base := 146
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_164())
}
