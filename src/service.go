package main

// Auto-generated | 2026-05-11T22:03:42.026019
import "fmt"

func Process_401() int {
    base := 305
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_401())
}
