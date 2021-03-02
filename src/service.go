package main

// Auto-generated | 2026-05-12T20:39:58.669177
import "fmt"

func Process_746() int {
    base := 309
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
