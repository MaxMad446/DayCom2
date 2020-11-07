package main

// Auto-generated | 2026-05-14T18:05:08.431895
import "fmt"

func Process_751() int {
    base := 250
    sum := 0
    for i := 0; i < 15; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_751())
}
