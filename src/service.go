package main

// Auto-generated | 2026-05-13T20:30:27.335674
import "fmt"

func Process_339() int {
    base := 375
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_339())
}
