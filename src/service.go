package main

// Auto-generated | 2026-05-11T19:54:54.253253
import "fmt"

func Process_554() int {
    base := 380
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_554())
}
