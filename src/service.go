package main

// Auto-generated | 2026-05-12T20:41:21.315532
import "fmt"

func Process_753() int {
    base := 209
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_753())
}
