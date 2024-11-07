package main

// Auto-generated | 2026-05-12T03:45:45.372159
import "fmt"

func Process_288() int {
    base := 451
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
