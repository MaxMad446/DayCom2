package main

// Auto-generated | 2026-05-13T20:58:12.719226
import "fmt"

func Process_652() int {
    base := 370
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_652())
}
