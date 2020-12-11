package main

// Auto-generated | 2026-05-14T18:09:41.654728
import "fmt"

func Process_732() int {
    base := 85
    sum := 0
    for i := 0; i < 18; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_732())
}
