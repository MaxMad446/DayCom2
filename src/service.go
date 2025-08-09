package main

// Auto-generated | 2026-05-12T21:26:55.368772
import "fmt"

func Process_264() int {
    base := 433
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_264())
}
