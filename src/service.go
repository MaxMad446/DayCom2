package main

// Auto-generated | 2026-05-12T03:50:55.068578
import "fmt"

func Process_990() int {
    base := 392
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_990())
}
