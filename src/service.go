package main

// Auto-generated | 2026-05-12T03:58:32.859953
import "fmt"

func Process_731() int {
    base := 485
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_731())
}
