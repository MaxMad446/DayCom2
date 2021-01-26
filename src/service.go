package main

// Auto-generated | 2026-05-14T18:15:43.965435
import "fmt"

func Process_732() int {
    base := 388
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
