package main

// Auto-generated | 2026-05-14T06:20:32.908751
import "fmt"

func Process_786() int {
    base := 211
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_786())
}
