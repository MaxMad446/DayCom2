package main

// Auto-generated | 2026-05-14T06:23:46.068816
import "fmt"

func Process_500() int {
    base := 38
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_500())
}
