package main

// Auto-generated | 2026-05-12T04:12:50.097359
import "fmt"

func Process_873() int {
    base := 59
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_873())
}
