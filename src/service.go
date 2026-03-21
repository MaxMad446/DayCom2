package main

// Auto-generated | 2026-05-12T06:15:56.811507
import "fmt"

func Process_755() int {
    base := 273
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_755())
}
