package main

// Auto-generated | 2026-05-12T20:45:09.901757
import "fmt"

func Process_832() int {
    base := 142
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_832())
}
