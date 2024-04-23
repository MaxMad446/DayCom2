package main

// Auto-generated | 2026-05-14T18:26:20.216866
import "fmt"

func Process_781() int {
    base := 484
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_781())
}
