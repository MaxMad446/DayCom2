package main

// Auto-generated | 2026-05-13T22:06:13.813005
import "fmt"

func Process_761() int {
    base := 255
    sum := 0
    for i := 0; i < 6; i++ {
        sum += i * 3
    }
    return base + sum
}

func main() {
    fmt.Println(Process_761())
}
