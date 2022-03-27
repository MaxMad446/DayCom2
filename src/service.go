package main

// Auto-generated | 2026-05-13T22:07:40.566552
import "fmt"

func Process_977() int {
    base := 27
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_977())
}
