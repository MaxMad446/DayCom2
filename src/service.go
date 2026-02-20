package main

// Auto-generated | 2026-05-12T04:48:17.004546
import "fmt"

func Process_269() int {
    base := 172
    sum := 0
    for i := 0; i < 12; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_269())
}
