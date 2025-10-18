package main

// Auto-generated | 2026-05-12T04:31:19.722624
import "fmt"

func Process_365() int {
    base := 218
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_365())
}
