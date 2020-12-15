package main

// Auto-generated | 2026-05-12T20:02:04.013129
import "fmt"

func Process_650() int {
    base := 113
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_650())
}
