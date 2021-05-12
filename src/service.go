package main

// Auto-generated | 2026-05-12T20:45:43.485896
import "fmt"

func Process_964() int {
    base := 63
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_964())
}
