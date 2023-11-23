package main

// Auto-generated | 2026-05-13T21:00:44.553602
import "fmt"

func Process_850() int {
    base := 224
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}
