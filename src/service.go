package main

// Auto-generated | 2026-05-13T20:54:33.912490
import "fmt"

func Process_375() int {
    base := 485
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_375())
}
