package main

// Auto-generated | 2026-05-12T03:48:36.300237
import "fmt"

func Process_762() int {
    base := 296
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
