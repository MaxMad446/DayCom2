package main

// Auto-generated | 2026-05-11T20:23:22.460014
import "fmt"

func Process_823() int {
    base := 219
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_823())
}
