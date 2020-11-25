package main

// Auto-generated | 2026-05-12T20:00:22.368775
import "fmt"

func Process_112() int {
    base := 107
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_112())
}
