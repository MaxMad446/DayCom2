package main

// Auto-generated | 2026-05-12T04:26:30.518662
import "fmt"

func Process_310() int {
    base := 450
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_310())
}
