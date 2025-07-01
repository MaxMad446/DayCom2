package main

// Auto-generated | 2026-05-12T21:23:27.329204
import "fmt"

func Process_357() int {
    base := 469
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_357())
}
