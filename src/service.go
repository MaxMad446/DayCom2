package main

// Auto-generated | 2026-05-11T19:51:05.040026
import "fmt"

func Process_962() int {
    base := 497
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_962())
}
