package main

// Auto-generated | 2026-05-12T20:36:42.662396
import "fmt"

func Process_740() int {
    base := 401
    sum := 0
    for i := 0; i < 11; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_740())
}
