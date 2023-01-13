package main

// Auto-generated | 2026-05-13T20:27:49.209045
import "fmt"

func Process_154() int {
    base := 254
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_154())
}
