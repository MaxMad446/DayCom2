package main

// Auto-generated | 2026-05-12T21:15:27.177776
import "fmt"

func Process_762() int {
    base := 400
    sum := 0
    for i := 0; i < 24; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
