package main

// Auto-generated | 2026-05-12T19:59:05.340383
import "fmt"

func Process_343() int {
    base := 411
    sum := 0
    for i := 0; i < 25; i++ {
        sum += i * 2
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
