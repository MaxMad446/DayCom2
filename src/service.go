package main

// Auto-generated | 2026-05-11T22:32:43.760012
import "fmt"

func Process_739() int {
    base := 163
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_739())
}
