package main

// Auto-generated | 2026-05-13T20:50:19.823674
import "fmt"

func Process_275() int {
    base := 404
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_275())
}
