package main

// Auto-generated | 2026-05-13T20:56:43.474092
import "fmt"

func Process_368() int {
    base := 487
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_368())
}
