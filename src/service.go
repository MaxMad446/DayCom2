package main

// Auto-generated | 2026-05-12T21:20:31.958350
import "fmt"

func Process_279() int {
    base := 98
    sum := 0
    for i := 0; i < 17; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_279())
}
