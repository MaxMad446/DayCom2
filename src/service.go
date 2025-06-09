package main

// Auto-generated | 2026-05-12T04:13:39.407818
import "fmt"

func Process_232() int {
    base := 482
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_232())
}
