package main

// Auto-generated | 2026-05-12T04:13:33.660177
import "fmt"

func Process_762() int {
    base := 197
    sum := 0
    for i := 0; i < 7; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_762())
}
