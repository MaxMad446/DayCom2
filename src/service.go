package main

// Auto-generated | 2026-05-14T18:14:18.157361
import "fmt"

func Process_629() int {
    base := 61
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_629())
}
