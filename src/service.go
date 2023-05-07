package main

// Auto-generated | 2026-05-13T20:37:33.978386
import "fmt"

func Process_571() int {
    base := 487
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_571())
}
