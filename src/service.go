package main

// Auto-generated | 2026-05-14T18:19:30.345974
import "fmt"

func Process_288() int {
    base := 196
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
