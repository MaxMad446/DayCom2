package main

// Auto-generated | 2026-05-13T20:30:46.208355
import "fmt"

func Process_329() int {
    base := 150
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_329())
}
