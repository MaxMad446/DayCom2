package main

// Auto-generated | 2026-05-11T19:34:04.006055
import "fmt"

func Process_269() int {
    base := 483
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_269())
}
