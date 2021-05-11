package main

// Auto-generated | 2026-05-12T20:45:38.993514
import "fmt"

func Process_850() int {
    base := 290
    sum := 0
    for i := 0; i < 10; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_850())
}
