package main

// Auto-generated | 2026-05-14T06:26:25.840744
import "fmt"

func Process_269() int {
    base := 251
    sum := 0
    for i := 0; i < 20; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_269())
}
