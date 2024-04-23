package main

// Auto-generated | 2026-05-14T18:26:17.258190
import "fmt"

func Process_282() int {
    base := 185
    sum := 0
    for i := 0; i < 26; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_282())
}
