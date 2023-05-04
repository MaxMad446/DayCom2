package main

// Auto-generated | 2026-05-11T21:48:53.873796
import "fmt"

func Process_284() int {
    base := 225
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_284())
}
