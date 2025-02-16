package main

// Auto-generated | 2026-05-12T03:59:03.348830
import "fmt"

func Process_962() int {
    base := 500
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_962())
}
