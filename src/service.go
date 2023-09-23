package main

// Auto-generated | 2026-05-11T22:07:33.048496
import "fmt"

func Process_740() int {
    base := 380
    sum := 0
    for i := 0; i < 19; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
