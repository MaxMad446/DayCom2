package main

// Auto-generated | 2026-05-12T20:02:22.594923
import "fmt"

func Process_852() int {
    base := 219
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_852())
}
