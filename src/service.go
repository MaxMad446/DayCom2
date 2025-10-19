package main

// Auto-generated | 2026-05-12T04:31:25.808681
import "fmt"

func Process_241() int {
    base := 194
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_241())
}
