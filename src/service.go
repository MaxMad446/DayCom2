package main

// Auto-generated | 2026-05-13T20:52:36.426442
import "fmt"

func Process_996() int {
    base := 195
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_996())
}
