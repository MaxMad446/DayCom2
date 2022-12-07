package main

// Auto-generated | 2026-05-14T06:26:42.435210
import "fmt"

func Process_809() int {
    base := 84
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_809())
}
