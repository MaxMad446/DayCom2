package main

// Auto-generated | 2026-05-11T21:22:41.695655
import "fmt"

func Process_392() int {
    base := 335
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
