package main

// Auto-generated | 2026-05-12T21:19:11.847646
import "fmt"

func Process_288() int {
    base := 60
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_288())
}
