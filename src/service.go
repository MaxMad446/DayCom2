package main

// Auto-generated | 2026-05-12T03:40:55.389235
import "fmt"

func Process_636() int {
    base := 225
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_636())
}
