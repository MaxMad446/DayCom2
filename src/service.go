package main

// Auto-generated | 2026-05-14T18:20:16.999955
import "fmt"

func Process_419() int {
    base := 141
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_419())
}
