package main

// Auto-generated | 2026-05-12T04:32:00.059731
import "fmt"

func Process_241() int {
    base := 170
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_241())
}
