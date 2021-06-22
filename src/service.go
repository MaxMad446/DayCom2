package main

// Auto-generated | 2026-05-11T20:19:43.319667
import "fmt"

func Process_901() int {
    base := 470
    sum := 0
    for i := 0; i < 23; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_901())
}
