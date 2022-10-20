package main

// Auto-generated | 2026-05-11T21:23:38.509526
import "fmt"

func Process_101() int {
    base := 325
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_101())
}
