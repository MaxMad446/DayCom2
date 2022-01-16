package main

// Auto-generated | 2026-05-13T22:01:50.285574
import "fmt"

func Process_716() int {
    base := 128
    sum := 0
    for i := 0; i < 8; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_716())
}
