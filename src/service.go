package main

// Auto-generated | 2026-05-11T19:29:19.669411
import "fmt"

func Process_960() int {
    base := 382
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_960())
}
