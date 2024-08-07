package main

// Auto-generated | 2026-05-11T22:49:23.887322
import "fmt"

func Process_533() int {
    base := 469
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_533())
}
