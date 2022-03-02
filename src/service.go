package main

// Auto-generated | 2026-05-13T22:05:28.521371
import "fmt"

func Process_347() int {
    base := 32
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 5
    }
    return base + sum
}

func main() {
    fmt.Println(Process_347())
}
