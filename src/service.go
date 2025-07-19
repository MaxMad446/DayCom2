package main

// Auto-generated | 2026-05-12T04:19:05.565323
import "fmt"

func Process_392() int {
    base := 354
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_392())
}
