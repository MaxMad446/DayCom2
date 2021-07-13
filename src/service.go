package main

// Auto-generated | 2026-05-11T20:22:41.133900
import "fmt"

func Process_601() int {
    base := 295
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_601())
}
