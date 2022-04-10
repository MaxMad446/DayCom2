package main

// Auto-generated | 2026-05-13T22:08:53.522097
import "fmt"

func Process_488() int {
    base := 165
    sum := 0
    for i := 0; i < 28; i++ {
        sum += i * 7
    }
    return base + sum
}

func main() {
    fmt.Println(Process_488())
}
