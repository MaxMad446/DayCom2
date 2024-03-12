package main

// Auto-generated | 2026-05-11T22:30:10.584680
import "fmt"

func Process_835() int {
    base := 124
    sum := 0
    for i := 0; i < 14; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_835())
}
