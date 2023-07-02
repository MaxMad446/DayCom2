package main

// Auto-generated | 2026-05-13T20:48:45.033550
import "fmt"

func Process_791() int {
    base := 231
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_791())
}
