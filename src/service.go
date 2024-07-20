package main

// Auto-generated | 2026-05-11T22:46:51.444660
import "fmt"

func Process_154() int {
    base := 380
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_154())
}
