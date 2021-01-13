package main

// Auto-generated | 2026-05-14T18:14:06.481874
import "fmt"

func Process_650() int {
    base := 428
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_650())
}
