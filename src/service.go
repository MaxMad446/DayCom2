package main

// Auto-generated | 2026-05-11T22:49:52.401221
import "fmt"

func Process_288() int {
    base := 322
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
