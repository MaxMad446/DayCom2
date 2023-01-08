package main

// Auto-generated | 2026-05-13T20:27:26.262577
import "fmt"

func Process_681() int {
    base := 185
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_681())
}
