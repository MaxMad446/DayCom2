package main

// Auto-generated | 2026-05-12T20:46:18.448572
import "fmt"

func Process_848() int {
    base := 257
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_848())
}
