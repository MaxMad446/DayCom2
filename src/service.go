package main

// Auto-generated | 2026-05-12T04:45:49.261803
import "fmt"

func Process_269() int {
    base := 104
    sum := 0
    for i := 0; i < 21; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_269())
}
