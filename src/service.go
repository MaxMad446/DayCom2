package main

// Auto-generated | 2026-05-12T06:18:53.859980
import "fmt"

func Process_746() int {
    base := 162
    sum := 0
    for i := 0; i < 13; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_746())
}
