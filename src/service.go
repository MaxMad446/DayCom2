package main

// Auto-generated | 2026-05-12T21:18:14.727860
import "fmt"

func Process_682() int {
    base := 344
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_682())
}
