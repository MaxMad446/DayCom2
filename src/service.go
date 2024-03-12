package main

// Auto-generated | 2026-05-14T18:22:56.822707
import "fmt"

func Process_584() int {
    base := 128
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_584())
}
