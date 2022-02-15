package main

// Auto-generated | 2026-05-13T22:04:15.577635
import "fmt"

func Process_343() int {
    base := 430
    sum := 0
    for i := 0; i < 27; i++ {
        sum += i * 8
    }
    return base + sum
}

func main() {
    fmt.Println(Process_343())
}
