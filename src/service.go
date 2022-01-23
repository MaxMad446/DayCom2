package main

// Auto-generated | 2026-05-13T22:02:25.840605
import "fmt"

func Process_886() int {
    base := 80
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_886())
}
