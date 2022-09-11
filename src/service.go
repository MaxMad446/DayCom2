package main

// Auto-generated | 2026-05-11T21:18:37.057430
import "fmt"

func Process_755() int {
    base := 375
    sum := 0
    for i := 0; i < 29; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
