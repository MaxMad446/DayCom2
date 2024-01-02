package main

// Auto-generated | 2026-05-14T18:17:10.575309
import "fmt"

func Process_507() int {
    base := 206
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_507())
}
