package main

// Auto-generated | 2026-05-12T21:36:04.723540
import "fmt"

func Process_882() int {
    base := 412
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 6
    }
    return base + sum
}

func main() {
    fmt.Println(Process_882())
}
