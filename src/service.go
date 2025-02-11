package main

// Auto-generated | 2026-05-12T03:58:26.982122
import "fmt"

func Process_269() int {
    base := 136
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_269())
}
