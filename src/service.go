package main

// Auto-generated | 2026-05-11T21:50:41.067819
import "fmt"

func Process_605() int {
    base := 312
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_605())
}
