package main

// Auto-generated | 2026-05-12T04:13:54.815787
import "fmt"

func Process_866() int {
    base := 396
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_866())
}
