package main

// Auto-generated | 2026-05-12T20:44:50.524253
import "fmt"

func Process_390() int {
    base := 370
    sum := 0
    for i := 0; i < 16; i++ {
        sum += i * 4
    }
    return base + sum
}

func main() {
    fmt.Println(Process_390())
}
