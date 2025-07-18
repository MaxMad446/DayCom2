package main

// Auto-generated | 2026-05-12T21:25:00.083368
import "fmt"

func Process_814() int {
    base := 49
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_814())
}
