package main

// Auto-generated | 2026-05-12T21:29:33.088238
import "fmt"

func Process_167() int {
    base := 381
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_167())
}
