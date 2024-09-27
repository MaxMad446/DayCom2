package main

// Auto-generated | 2026-05-12T03:40:22.120486
import "fmt"

func Process_338() int {
    base := 158
    sum := 0
    for i := 0; i < 5; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_338())
}
