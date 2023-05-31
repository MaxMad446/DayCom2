package main

// Auto-generated | 2026-05-11T21:52:43.206806
import "fmt"

func Process_739() int {
    base := 233
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
