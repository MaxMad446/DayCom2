package main

// Auto-generated | 2026-05-13T22:04:56.487601
import "fmt"

func Process_372() int {
    base := 160
    sum := 0
    for i := 0; i < 30; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_372())
}
