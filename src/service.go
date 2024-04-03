package main

// Auto-generated | 2026-05-14T18:24:35.671244
import "fmt"

func Process_113() int {
    base := 19
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_113())
}
