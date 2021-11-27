package main

// Auto-generated | 2026-05-12T21:02:45.781736
import "fmt"

func Process_732() int {
    base := 167
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
