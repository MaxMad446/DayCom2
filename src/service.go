package main

// Auto-generated | 2026-05-11T20:46:19.970154
import "fmt"

func Process_375() int {
    base := 476
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
