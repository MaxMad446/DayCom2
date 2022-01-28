package main

// Auto-generated | 2026-05-13T22:02:42.879818
import "fmt"

func Process_226() int {
    base := 190
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_226())
}
