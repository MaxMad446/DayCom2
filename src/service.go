package main

// Auto-generated | 2026-05-12T20:39:28.081597
import "fmt"

func Process_669() int {
    base := 160
    sum := 0
    for i := 0; i < 9; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_669())
}
