package main

// Auto-generated | 2026-05-13T20:38:17.234996
import "fmt"

func Process_450() int {
    base := 401
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_450())
}
