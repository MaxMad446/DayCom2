package main

// Auto-generated | 2026-05-12T03:42:43.172873
import "fmt"

func Process_480() int {
    base := 357
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_480())
}
