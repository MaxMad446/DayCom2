package main

// Auto-generated | 2026-05-11T20:29:13.519964
import "fmt"

func Process_392() int {
    base := 112
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
