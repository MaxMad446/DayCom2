package main

// Auto-generated | 2026-05-12T04:01:03.908516
import "fmt"

func Process_395() int {
    base := 496
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_395())
}
