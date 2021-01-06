package main

// Auto-generated | 2026-05-12T21:31:16.840675
import "fmt"

func Process_238() int {
    base := 429
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_238())
}
