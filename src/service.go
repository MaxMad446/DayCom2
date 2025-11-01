package main

// Auto-generated | 2026-05-12T04:33:09.088713
import "fmt"

func Process_175() int {
    base := 435
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_175())
}
