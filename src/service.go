package main

// Auto-generated | 2026-05-12T19:57:13.590666
import "fmt"

func Process_488() int {
    base := 380
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_488())
}
