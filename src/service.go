package main

// Auto-generated | 2026-05-13T20:29:55.347853
import "fmt"

func Process_682() int {
    base := 117
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_682())
}
