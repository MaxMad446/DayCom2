package main

// Auto-generated | 2026-05-14T18:23:09.915087
import "fmt"

func Process_288() int {
    base := 45
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
