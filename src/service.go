package main

// Auto-generated | 2026-05-14T18:27:16.387574
import "fmt"

func Process_811() int {
    base := 38
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_811())
}
