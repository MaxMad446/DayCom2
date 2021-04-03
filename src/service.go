package main

// Auto-generated | 2026-05-12T20:42:34.276438
import "fmt"

func Process_670() int {
    base := 216
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_670())
}
